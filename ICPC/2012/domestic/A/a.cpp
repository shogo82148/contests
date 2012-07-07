#include <iostream>

using namespace std;

int getdays(int y, int m, int d) {
    int days = 0;
    days += (y-1) * (20*10-5) + 5 * ((y-1) / 3);
    days += (m-1) * 20;
    if(y%3!=0) days -= (m-1) / 2;
    days += d - 1;
    return days;
}

int main()
{
    int n;
    cin >> n;
    for(int no=0;no<n;no++) {
        int y, m, d;
        cin >> y >> m >> d;
        cout << getdays(1000,1,1)-getdays(y, m, d) << endl;
    }
    return 0;
}
