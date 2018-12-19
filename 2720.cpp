#include <iostream>
using namespace std;
int main() {
	int Q = 0, D = 0, N = 0, P = 0;
	int how;
	int *ptr;

	cin >> how;
	ptr = new int[how];
	for (int i = 0; i < how; i++) {
		cin >> ptr[i];
		while (ptr[i] >= 25) {
			ptr[i] = ptr[i] - 25;
			Q++;
		}
		while (ptr[i] >= 10) {
			ptr[i] = ptr[i] - 10;
			D++;
		}
		while (ptr[i] >= 5) {
			ptr[i] = ptr[i] - 5;
			N++;
		}
		while (ptr[i] > 0) {
			ptr[i] = ptr[i] - 1;
			P++;
		}
		cout << Q << ' ' << D << ' ' << N << ' ' << P << endl;
		Q = 0;
		D = 0;
		N = 0;
		P = 0;
	}
}