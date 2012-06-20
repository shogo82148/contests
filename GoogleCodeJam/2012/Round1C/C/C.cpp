#include <iostream>
#include <algorithm>
#include <map>

#define int long long

using namespace std;
int N, M;
int numsA[200], typesA[200];
int numsB[200], typesB[200];

map<int> dp[200][200];

int solve(int i, int j, int num)
{
    int nnum = num;
    map<int>::iterator itr = dp[i][j].find(num);
    if(itr!=dp[i][j].end()) {
        return *itr;
    }
    if(i>=N || j>=M) return 0;

    int ans = solve(i+1, j, num);
    int numBox = 0;
    while(numBox<numsA[i] && j<M) {
        if(typesA[i]==typesB[j] && numsB[j]!=num) {
            numBox += numsB[j] - num;
            num = numsB[j] - (max(numsA[i], numBox) - numsA[i]);
            //cout << numBox << endl;
            ans = max(ans, min(numsA[i], numBox) + solve(i+1, j, num));
            //cout << min(numsA[i], numBox) << endl;
        }
        ++j;
        num = 0;
    }
    //cout << "return " << ans << endl;
    dp[i][j].insert(nnum, ans);
    return ans;
}

int solve()
{
    cin >> N >> M;
    for(int i=0;i<N;++i) {
        cin >> numsA[i] >> typesA[i];
    }
    for(int i=0;i<M;++i) {
        cin >> numsB[i] >> typesB[i];
    }

    return solve(0,0,0);
}

main()
{
    int T;
    cin >> T;
    for(int no=1;no<=T;++no) {
        cout << "Case #" << no << ": " << solve() << endl;
    }
    return 0;
}
