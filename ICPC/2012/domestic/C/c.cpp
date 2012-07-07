#include <iostream>
#include <algorithm>

using namespace std;

int dice[201][201];
int number[201][201];

struct Dice {
    int men[7];
    int reverse[7];
    int x, y;
    Dice(int t, int f, int x, int y) {
        int m[7][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 3, 5, 2, 4, 0},
            {0, 4, 0, 1, 6, 0, 3},
            {0, 2, 6, 0, 0, 1, 5},
            {0, 5, 1, 0, 0, 6, 2},
            {0, 3, 0, 6, 1, 0, 4},
            {0, 0, 4, 2, 5, 3, 0},
        };
        men[1] = t;
        men[6] = 7 - t;
        men[3] = f;
        men[4] = 7 - f;
        men[5] = m[t][f];
        men[2] = 7 - men[5];
        rev();
        this->x = x;
        this->y = y;
    }

    void xplus() {
        int tmp = men[1];
        men[1] = men[2];
        men[2] = men[6];
        men[6] = men[5];
        men[5] = tmp;
        x++;
        rev();
    }
    void xminus() {
        int tmp = men[1];
        men[1] = men[5];
        men[5] = men[6];
        men[6] = men[2];
        men[2] = tmp;
        x--;
        rev();
    }
    void yplus() {
        int tmp = men[1];
        men[1] = men[4];
        men[4] = men[6];
        men[6] = men[3];
        men[3] = tmp;
        y++;
        rev();
    }
    void yminus() {
        int tmp = men[1];
        men[1] = men[3];
        men[3] = men[6];
        men[6] = men[4];
        men[4] = tmp;
        y--;
        rev();
    }

    void rev() {
        int i;
        for(int i=1;i<=6;i++)
            reverse[men[i]] = i;
    }
};

bool rotate(Dice& d, int num) {
    int dir = d.reverse[num];
    int c = number[d.y][d.x];
    switch(dir) {
    case 1:
        return false;
    case 2:
        if(number[d.y][d.x-1]>=c) return false;
        d.xminus();
        return true;
    case 3:
        if(number[d.y+1][d.x]>=c) return false;
        d.yplus();
        return true;
    case 4:
        if(number[d.y-1][d.x]>=c) return false;
        d.yminus();
        return true;
    case 5:
        if(number[d.y][d.x+1]>=c) return false;
        d.xplus();
        return true;
    case 6:
        return false;
    }
    return false;
}

int main()
{
    for(;;) {
        int n;
        cin >> n;
        if(n==0) break;
        fill(dice[0], dice[0]+201*201, 0);
        fill(number[0], number[0]+201*201, 0);
        for(int i=0;i<n;i++) {
            int t, f;
            cin >> t >> f;
            Dice d(t, f, 100, 100);
            while(rotate(d, 6) || rotate(d, 5) || rotate(d, 4));
            number[d.y][d.x]++;
            dice[d.y][d.x] = d.men[1];
        }

        int ans[7] = {0};
        for(int y=0;y<201;y++) {
            for(int x=0;x<201;x++) {
                ans[dice[y][x]]++;
            }
        }
        cout << ans[1];
        for(int i=2;i<=6;i++) {
            cout << " " << ans[i];
        }
        cout << endl;
    }
    return 0;
}
