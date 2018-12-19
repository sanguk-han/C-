#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int mat[10001];
	long long int res = 0;
	int n;
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> mat[i];
	}

	for (int i = 1; i <= n - 1; i++) {
		for (int j = i; j <= n; j++) {
			res = abs(mat[i] - mat[j]) + res;
		}
	}

	cout << res * 2;
}