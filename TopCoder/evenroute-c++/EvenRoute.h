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

class EvenRoute {

	public: string isItPossible(vector<int> x, vector<int> y, int wantedParity) {
		for(int i=0;i<(int)x.size();i++) {
			int xx = x[i], yy = y[i];
			if((abs(xx)+abs(yy)) % 2 == wantedParity) return "CAN";
		}
		return "CANNOT";
	}

};
