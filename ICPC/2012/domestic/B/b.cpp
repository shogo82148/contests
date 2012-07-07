#include <iostream>
#include <algorithm>

using namespace std;

int list[1000000];

int next(int a, int L)
{
    int digit[10];
    for(int i=0;i<L;i++) {
        digit[i] = a % 10;
        a /= 10;
    }
    sort(digit, digit+L);
    int little = 0, big = 0;
    for(int i=0;i<L;i++) {
        little = little * 10 + digit[i];
        big = big * 10 + digit[L-i-1];
    }
    //cout << big << " " << little << endl;
    return big - little;
}

int main()
{
    for(;;) {
        int a, L;
        cin >> a >> L;
        if(a==0 && L==0) break;
        fill(list, list+1000000, -1);
        list[a] = 0;
        for(int i=1;;i++) {
            a = next(a, L);
            //cout << a << endl;
            if(list[a]>=0) {
                cout << list[a] << " " << a << " " << (i-list[a]) << endl;
                break;
            }
            list[a] = i;
        }
    }
}
