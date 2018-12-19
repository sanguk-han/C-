#include <iostream>
using namespace std;
int main() {
	long long int RSS = 0;
	int n;
	long long int *x, *y;
	long long int sum = 0;
	int res1, res2;
	
	cin >> n;
	x = new long long int[n];
	y = new long long int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < n; i++) {
		RSS = RSS + (y[i] - (1 * x[i] + 1)) * (y[i] - (1 * x[i] + 1));
	}

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			for (int k = 0; k < n; k++) {
				sum = sum + (y[k] - (i * x[k] + j))*(y[k] - (i * x[k] + j));
			}
			if (RSS >= sum) {
				RSS = sum;
				res1 = i;
				res2 = j;
			}
			sum = 0;
		}
	}
	cout << res1 << ' ' << res2;

	return 0;
}