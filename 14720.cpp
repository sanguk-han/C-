#include <iostream>
using namespace std;
int main() {
	int n;
	int *ptr;
	int count = 0;

	cin >> n;
	ptr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
	}

	for (int i = 0; i < n; i++) {
		int flag = 0;
		if (ptr[i] == 0) {
			count++;
			for (int j = i + 1; j < n; j++) {
				if (ptr[j] == 1) {
					count++;
					for (int k = j + 1; k < n; k++) {
						if (ptr[k] == 2) {
							count++;
							i = k;
							flag = 1;
							break;
						}
						if (k == n - 1) {
							flag = 1;
							i = k;
							break;
						}
					}
				}
				if (j == n - 1) {
					flag = 1;
					i = j;
					break;
				}
				if (flag == 1) {
					break;
				}
			}
		}
	}
	cout << count;

	return 0;
}