#include <iostream>
#include <set>

using namespace std;

int main() {
	int C;
	cin >> C;
	for(int NO=1;NO<=C;NO++) {
		int A, B, P;
		cin >> A >> B >> P;
	
		set<int> s;
		for(int i=A;i<=B;i++) {
			int n = i;
			for(int j=2;n!=1;) {
				if(n%j!=0) continue;
				while(n%j==0) n /= j;
				
			}
		}
		
		cout << "Case #" << NO << ": " << endl;
	}
	return 0;
}
