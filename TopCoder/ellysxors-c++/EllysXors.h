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

class EllysXors {

	long long getXor(long long n) {
		long long ans = ((n+1)>>1) & 1;
		if(n%2) return ans;
		else return ans | (n & ~1);
	}

	public: long long getXor(long long L, long long R) {
		if(L==R) return L;
		return getXor(L-1) ^ getXor(R);
	}

};
