#include <iostream>
using namespace std;

int dp[1000001];

int DP(int n) {
	if (n == 1) {
		dp[n] = 1;
		return 1;
	}
	if (n == 2) {
		dp[n] = 2;
		return 2;
	}
	if (dp[n] != 0) {
		return dp[n] % 15746;
	}
	return dp[n] = (DP(n - 1) + DP(n - 2)) % 15746;
}

int main() {
	int n;
	cin >> n;
	cout << DP(n);
	return 0;
}