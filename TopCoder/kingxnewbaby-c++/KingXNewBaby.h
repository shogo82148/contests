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

class KingXNewBaby {
	bool isVowel(char ch) {
		return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
	}
	public: string isValid(string name) {
		if(name.size()!=8) return "NO";
		int vowel_count = 0;
		char vowel = '\0';
		for(int i=0; i<(int)name.size(); ++i) {
			if(!isVowel(name[i])) continue;
			++vowel_count;
			if(vowel && vowel != name[i]) {
				return "NO";
			}
			vowel = name[i];
		}

		return vowel_count==2 ? "YES" : "NO";
	}

};
