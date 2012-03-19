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

class RollingDiceDivTwo {

	public: int minimumFaces(vector<string> rolls) {
		int n = rolls.size();
		int m = rolls[0].length();
		vector<int> dice(m);
		fill(dice.begin(), dice.end(), 1);
		for(int i=0;i<n;i++) {
			vector<int> d(m);
			for(int j=0;j<m;j++) d[j] = rolls[i][j] - '0';
			sort(d.begin(), d.end());
			for(int j=0;j<m;j++) dice[j] = max(dice[j], d[j]);
		}

		int sum = 0;
		for(int i=0;i<m;i++) sum += dice[i];
		return sum;
	}

};
