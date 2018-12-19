#include <iostream>
using namespace std;
int main() {
	int n;
	int how;

	cin >> how;
	while (how--) {
		int res = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			res = res + (i * i * i + 3 * i * i + 2 * i) / 2;
		}
		cout << res << endl;
	}
	return 0;
}