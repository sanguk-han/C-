#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int n, m, how, r1, c1, r2, c2, **ptr;
	
	cin >> n >> m >> how;
	ptr = new int *[n];
	for (int i = 0; i < n; i++) {
		ptr[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &ptr[i][j]);
		}
	}
	while (how--) {
		int sum = 0;
		int count = 0;
		int *mat;

		cin >> r1 >> c1 >> r2 >> c2;
		mat = new int[(r2 - r1 + 1) * (c2 - c1 + 1)];
		for (int i = r1 - 1; i <= r2 - 1; i++) {
			for (int j = c1 - 1; j <= c2 - 1; j++) {
				mat[count++] = ptr[i][j];
			}
		}

		for (int i = 1; i < count; i++) {
			mat[i] = mat[i] + mat[i - 1];
		}
		printf("%d\n", mat[count-1] / count);
	}
}