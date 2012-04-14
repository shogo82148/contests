#include <iostream>
using namespace std;

int gcd(long long a, long long b) {
    return b==0 ? a : gcd(b, a%b);
}

int main() {
    int T;
    cin >> T;
    for(int NO=1;NO<=T;NO++) {
        long long lines = 0;
        long long days, month, weekdays;
        cin >> month >> days >> weekdays;
        lines += (month*days+weekdays-1) / weekdays;
        lines += month - 1;
        lines -= (month - 1) / (weekdays / gcd(days, weekdays));
        cout << "Case #" << NO << ": " << lines << endl;
    }
    return 0;
}
