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
#define INF 1E100

class MergersDivTwo {

	public: double findMaximum(vector<int> revenues, int k) {
		sort(revenues.begin(), revenues.end());
		int n = revenues.size();
		vector<double> a(n);
		double sum = 0;
		for(int i=0;i<n;i++) {
			sum += revenues[i];
			if(i+1<k) a[i] = -INF;
			else a[i] = sum / (i+1);
		}
		for(int i=0;i<n;i++) {
			if(a[i]<=-INF) continue;
			sum = a[i];
			for(int j=i+1;j<n;j++) {
				sum += revenues[j];
				if(j-i+1>=k) {
					a[j] = max(a[j], sum/(j-i+1));
				}
			}
		}
		return a[n-1];
	}

};
