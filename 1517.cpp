#include <iostream>
using namespace std;
int main() {
	int num[500001];
	int n;
	int cnt = 0;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (num[j] > num[j + 1]) {
				cnt++;
				int temp;
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	cout << cnt;

	return 0;
}