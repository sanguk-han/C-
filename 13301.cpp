#include <iostream>
using namespace std;

long long int dp[81];

long long int Cal(int n) {
	if (n == 1) {
		dp[n] = 2;
		return 2;
	}
	if (n == 2) {
		dp[n] = 3;
		return 3;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	return dp[n] = Cal(n - 1) + Cal(n - 2);
}

int main() {
	int n;

	cin >> n;
	cout << 2 * Cal(n);
	return 0;
}