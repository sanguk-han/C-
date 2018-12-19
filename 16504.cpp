#include <iostream>
using namespace std;
int main() {
	long long int N, sum = 0;
	int **ptr;

	cin >> N;
	ptr = new int*[N];
	for (int i = 0; i < N; i++) {
		ptr[i] = new int[N];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> ptr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum = sum + ptr[i][j];
		}
	}

	cout << sum;
	
	return 0;
}