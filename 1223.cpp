#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	map<int, int> m;

	cin >> a >> b >> c;

	for (int i = a; i >= 1; i--) {
		v1.push_back(i);
	}
	for (int i = b; i >= 1; i--) {
		v2.push_back(i);
	}
	for (int i = c; i >= 1; i--) {
		v3.push_back(i);
	}

	for (int i = 1 + 1 + 1; i <= a + b + c; i++) {
		m[i] = 0;
	}

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				int sum = i + j + k;
				m[sum] = m[sum] + 1;
			}
		}
	}
	
	int f = m[3];
	int ans;

	for (int i = 3; i <= a + b + c; i++) {
		if (f < m[i]) {
			f = m[i];
			ans = i;
		}
	}

	cout << ans;
}