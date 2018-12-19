#include <iostream>
using namespace std;

int mat1[16] = { 0, };

int dp1(int n) {
	if (n == 1) {
		mat1[n] = 3;
		return 3;
	}
	if (mat1[n] != 0) {
		return mat1[n];
	}
	return mat1[n] = dp1(n - 1) * 2 - 1;
}

int main() {
	int n;
	cin >> n;
	cout << dp1(n) * dp1(n);
}