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

class MergersDivOne {

	public: double findMaximum(vector<int> revenues) {
		sort(revenues.begin(), revenues.end());
		double result = revenues[0];
		for(int i=1;i<(int)revenues.size();i++) {
			result = (result+revenues[i]) / 2;
		}
		return result;
	}

};
