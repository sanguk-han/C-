#include <iostream>
using namespace std;

int dp[1001];

int Sum(int n) {
	if (n == 1) {
		dp[n] = 1;
		return 1;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	return dp[n] = Sum(n - 1) + n;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n <= Sum(i)) {
			int a = Sum(i) - n + 1;
			int b = i + 1 - a;
			cout << a << ' ' << b;
			break;
		}
	}
}