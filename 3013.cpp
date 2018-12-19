#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int mat[100001], N, B, res_a, res_b;
	cin >> N >> B;
	for (int i = 0; i < N; i++) {
		cin >> mat[i];
	}
	sort(mat, mat + N);
	res_a = B;
	res_b = N - B;
	if (res_a >= res_b) {
		cout << res_a;
	}
	else {
		cout << res_b;
	}
}