#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

#define INF 100000000

int n, m, c, s, g;
int lines[25][101][101];
int p[25], q[25][60], r[25][60];
int flag[25][101];

struct Station {
    int cost, n, c;
};

static bool operator < (const Station& a, const Station& b)
{
    return a.cost > b.cost;
}

int cost(int cc, int x, int y)
{
    int dist = lines[cc][x][y];
    int C = 0;
    for(int i=1;i<=p[cc];i++) {
        if(q[cc][i-1]<dist && dist<=q[cc][i]) {
            C += r[cc][i] * (dist-q[cc][i-1]);
            break;
        }
        C += r[cc][i] * (q[cc][i]-q[cc][i-1]);
    }
    return C;
}

int main()
{
    for(;;) {
        cin >> n >> m >> c >> s >> g;
        if(n==0) break;
        fill(lines[0][0], lines[0][0]+25*101*101, INF);
        fill(flag[0], flag[0]+25*101, INF);
        for(int i=0;i<m;i++) {
            int x, y, d, c;
            cin >> x >> y >> d >> c;
            lines[c][x][y] = min(lines[c][x][y], d);
            lines[c][y][x] = min(lines[c][x][y], d);
        }
        for(int i=1;i<=c;i++) {
            cin >> p[i];
        }
        for(int i=1;i<=c;i++) {
            q[i][0] = 0;
            for(int j=1;j<p[i];j++) {
                cin >> q[i][j];
            }
            q[i][p[i]] = INF;
            for(int j=1;j<=p[i];j++) {
                cin >> r[i][j];
            }
        }

        for(int cc=1;cc<=c;cc++) {
            for(int i=1;i<=n;i++) {
                for(int j=1;j<=n;j++) {
                    for(int k=1;k<=n;k++) {
                        lines[cc][i][j] = min(lines[cc][i][j], lines[cc][i][k]+lines[cc][k][j]);
                    }
                }
            }
        }

        int ans = -1;
        priority_queue<Station> q;
        for(int i=1;i<=c;i++) {
            Station st = {0, s, i};
            q.push(st);
        }
        while(!q.empty()) {
            Station s = q.top();
            q.pop();
            if(s.n==g) {
                ans = s.cost;
                break;
            }
            if(flag[s.c][s.n]<INF) continue;
            flag[s.c][s.n] = s.cost;
            for(int i=1;i<=n;i++) {
                int COST = cost(s.c,s.n,i);
                if(i==s.n) continue;
                if(COST>=INF) continue;
                for(int j=1;j<=c;j++) {
                    if(j==s.c) continue;
                    Station ns = {s.cost+COST, i, j};
                    q.push(ns);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
