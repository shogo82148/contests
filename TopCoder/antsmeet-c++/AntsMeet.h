#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define FORIT(i,c) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define ISEQ(c) (c).begin(), (c).end()

class AntsMeet {

	public: int countAnts(vector<int> x, vector<int> y, string direction) {
		int n = x.size();
		vector<int> vx(n), vy(n);
		vector<int> alive(n), tmp(n);

		for(int i=0;i<n;i++) {
			vx[i] = 0;
			vy[i] = 0;
			alive[i] = 1;
			switch(direction[i]) {
			case 'N':
				vy[i] = 1;
				break;
			case 'E':
				vx[i] = 1;
				break;
			case 'S':
				vy[i] = -1;
				break;
			case 'W':
				vx[i] = -1;
				break;
			}
		}

		for(int i=0;i<=2000;i++) {
			copy(alive.begin(), alive.end(), tmp.begin());
			for(int j=0;j<n;j++) {
				if(!alive[j]) continue;
				for(int k=0;k<j;k++) {
					if(!alive[k]) continue;
					if(x[j]==x[k] && y[j]==y[k]) {
						tmp[j] = tmp[k] = 0;
					}
				}
			}
			copy(tmp.begin(), tmp.end(), alive.begin());

			for(int j=0;j<n;j++) {
				//cout << alive[j] << ": " << x[j] << "," << y[j] << endl;
				x[j] += vx[j];
				y[j] += vy[j];
			}
			//cout << endl;
		}

		int ans = 0;
		for(int i=0;i<n;i++) {
			if(alive[i]) ans++;
		}

		return ans;
	}

};
