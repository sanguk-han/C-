#include <iostream>
using namespace std;

int Sum(int n) {
	int res = 0;
	for (int i = 1; i <= n - 1; i++) {
		res = res + i;
	}
	return res;
}

int main() {
	int n, count = 0;
	double i = 1;

	cin >> n;
	while (1) {
		double x = (n - Sum(i)) / i;
		if (x == int(x)) {
			count++;
		}
		if (x <= 1.0) {
			break;
		}
		i++;
	}
	cout << count;

	return 0;
}