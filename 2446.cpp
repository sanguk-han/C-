#include <iostream>
using namespace std;
int main() {
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			if (i + j == 2 * n - 1) {
				break;
			}
			else if (i <= j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	int mid = n - 1;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			continue;
		}
		for (int j = 0; j < 2 * n - 1;j++) {
			if (mid - i <= j && j <= mid + i) {
				cout << "*";
				if (mid + i == j) {
					break;
				}
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}