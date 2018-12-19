#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int mat[101];
	int N, M, res;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> mat[i];
	}
	sort(mat + 1, mat + N);
	res = mat[1] + mat[2] + mat[3];
	for (int i = 1; i <= N - 2; i++) {
		for (int j = i + 1; j <= N - 1; j++) {
			for (int k = j + 1; k <= N; k++) {
				if (mat[i] + mat[j] + mat[k] <= M) {
					if (abs(M - res) > abs(M - (mat[i] + mat[j] + mat[k]))) {
						res = mat[i] + mat[j] + mat[k];
					}
				}
			}
		}
	}
	cout << res;
}