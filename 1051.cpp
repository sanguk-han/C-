#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	int mat[51][51], value[4], n, count = 1, res = 0;
	int w, h;


	cin >> w >> h;
	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++) {
			scanf("%1d", &mat[i][j]);
		}
	}

	if (w > h) {
		n = h;
	}
	else {
		n = w;
	}
	
	while (1) {
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= h; j++) {
				if (j + count == h + 1 || i + count == w + 1) {
					break;
				}
				value[0] = mat[i][j];
				value[1] = mat[i][j + count];
				value[2] = mat[i + count][j];
				value[3] = mat[i + count][j + count];
				if (value[0] == value[1] && value[1] == value[2] && value[2] == value[3]) {
					res = (count + 1) * (count + 1);
				}
			}
		}
		count++;
		if (count == n) {
			break;
		}
	}

	cout << res;
	
}