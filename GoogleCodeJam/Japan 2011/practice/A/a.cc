#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int NO=1;NO<=T;NO++) {
		int N, K;
		cin >> N >> K;
		
		int mask = 1;
		for(int i=0;i<N;i++) mask <<= 1;
		mask--;
		
		cout << "Case #" << NO << ": ";
		if((K&mask)==mask) cout << "ON" << endl;
		else cout << "OFF" << endl;
	}
	return 0;
}
