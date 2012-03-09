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

class RollingDiceDivOne {

	public: long long mostLikely(vector<int> dice) {
		int n = dice.size();
		if(n==1) return 1LL;

		long long total = 0;
		long long maximum = dice[0];
		FORIT(i, dice) {
			total += *i;
			maximum = max(maximum, (long long)*i);
		}
		long long expect = (total+n) / 2;
		return min(expect, total-maximum+1);
	}

};
