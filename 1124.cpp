#include <iostream>
using namespace std;

int mat[10001];

void Prime() {
	for (int i = 2; i <= 100000; i++) {
		mat[i] = i;
	}
	for (int i = 2; i <= 100000; i++) {
		if (mat[i] == 0) {
			continue;
		}
		for (int j = i + i; j <= 100000; j += i) {
			mat[j] = 0;
		}
	}
}

int main() {
	int N, M, count = 0, res = 0;
	cin >> N >> M;
	Prime();
	for (int i = N; i <= M; i++) {
		for (int j = 2; j <= i; j++) {
			int num = i;
			if (mat[j] == 0) {
				continue;
			}
			while (num % mat[j] == 0) {
				count++;
				num = num / mat[j];
			}
		}
		if (mat[count] != 0) {
			res++;
		}
		count = 0;
	}
	cout << res;
}