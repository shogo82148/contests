#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Team {
    int id;
    int correct;
    int pena;
    vector<int> ngcount;

    void Correct(int P, int t) {
        ++correct;
        pena += ngcount[P-1]*1200 + t;
    }

    void Wrong(int P, int t) {
        ++ngcount[P-1];
    }
};

bool operator < (const Team& a, const Team& b) {
    if(a.correct!=b.correct)
        return a.correct > b.correct;
    if(a.pena!=b.pena)
        return a.pena < b.pena;
    return a.id < b.id;
}

int main()
{
    while(1) {
        vector<Team> teams;
        int T, P, R;
        cin >> T >> P >> R;

        if(T==0 && P==0 && R==0) break;

        teams.resize(T);
        for(int i=0;i<T;++i) {
            teams[i].id = i+1;
            teams[i].correct = 0;
            teams[i].pena = 0;
            teams[i].ngcount.resize(P);
            fill(teams[i].ngcount.begin(), teams[i].ngcount.end(), 0);
        }

        for(int i=0;i<R;++i) {
            int tid, pid, t;
            string msg;
            cin >> tid >> pid >> t >> msg;
            if(msg=="CORRECT") {
                teams[tid-1].Correct(pid, t);
            } else {
                teams[tid-1].Wrong(pid, t);
            }
        }

        sort(teams.begin(), teams.end());
        for(int i=0;i<T;++i) {
            cout << teams[i].id << " " << teams[i].correct << " " << teams[i].pena << endl;
        }
    }
}
