#include <iostream>
using namespace std;
int main() {
	int mat[201][201];
	int N, K;

	cin >> N >> K;

	for (int i = 1; i <= K; i++) {
		mat[1][i] = 1;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			mat[i][j] = (mat[i][j - 1] + mat[i - 1][j]) % 1000000000;
		}
	}
	cout << mat[N][K];
}