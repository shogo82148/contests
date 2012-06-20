#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long n, D;
long long d[20000], l[20000];
long long rl[20000];

string solve() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> d[i] >> l[i];
    }
    cin >> D;

    fill(rl, rl+n, 0);
    rl[0] = min(l[0], d[0]);

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            long long len = d[j] - d[i];
            if(len>rl[i]) break;
            rl[j] = max(rl[j], min(l[j], len));
        }
        if(D-d[i]<=rl[i]) return "YES";
    }
    return "NO";
}

int main(void) {
    int T;
    cin >> T;
    for(int no=1;no<=T;no++) {
        cout << "Case #" << no << ": " << solve() << endl;
    }
    return 0;
}
