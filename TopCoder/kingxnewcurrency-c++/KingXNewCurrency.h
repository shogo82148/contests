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

class KingXNewCurrency {
	bool possible(int A, int X, int Y) {
		for(int a=A;a>=0;a-=Y) {
			if(a%X==0) {
				return true;
			}
		}
		return false;
	}

	public: int howMany(int A, int B, int X) {
		if(A%X==0 && B%X==0) return -1;
		int m = max(A, B);
		int ans = 0;
		for(int Y=1;Y<=m; ++Y) {
			if(possible(A, X, Y) && possible(B, X, Y))
				++ans;
		}
		return ans;
	}

};
