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

class BinaryPolynomialDivTwo {

	public: int countRoots(vector<int> a) {
		int res = 0;
		int sum = 0;
		FORIT(i, a) {sum += *i;}
		if(a[0]==0) res++;
		if(sum%2==0) res++;
		return res;
	}

};
