#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    while(1) {
        int N;
        cin >> N;
        if(N<=0) break;

        vector<set<int> > list(N);

        for(int i=0;i<N;++i) {
            int M;
            cin >> M;
            for(int j=0;j<M;++j) {
                int p;
                cin >> p;
                list[i].insert(p);
            }
        }

        int K;
        vector<int> l;
        cin >> K;
        for(int i=0;i<K;++i) {
            int p;
            cin >> p;
            l.push_back(p);
        }

        vector<int> hannin;
        for(int i=0;i<N;++i) {
            int j;
            for(j=0;j<K;++j) {
                if(list[i].find(l[j])==list[i].end()) {
                    break;
                }
            }
            if(j==K) {
                hannin.push_back(i+1);
            }
        }
        if(hannin.size()==1) {
            cout << hannin[0] << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
