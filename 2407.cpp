#include <iostream>
using namespace std;
int main() {
	long long int mat_m[101] = { 1, }, mat_n[101] = { 1, };
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		mat_n[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		mat_m[i] = i;
	}
	for (int i = 1; i <= n; i++) {
		mat_n[i] = mat_n[i] * mat_n[i - 1];
	}
	for (int i = 1; i <= m; i++) {
		mat_m[i] = mat_m[i] * mat_m[i - 1];
	}
	cout << mat_n[n] / mat_m[m];
	return 0;
}