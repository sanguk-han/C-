#include <iostream>
using namespace std;
int main() {
	int cntplus = 0, cntminus = 0, cntzero = 0;
	for (int i = 0; i < 3; i++) {
		long long int res = 0;
		int how;
		cin >> how;
		for (int j = 0; j < how; j++) {
			long long int su;
			cin >> su;
			res = res + su;
		}
		if (res > 0) {
			cout << '+' << endl;
		}
		else if (res == 0) {
			cout << '0' << endl;
		}
		else {
			cout << '-' << endl;
		}
	}
}