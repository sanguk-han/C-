#include <iostream>
using namespace std;
int fibonacci(int n) {
	if (n == 0) {
		printf("0");
		return 0;
	}
	else if (n == 1) {
		printf("1");
		return 1;
	}
	else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
int main() {
	int count_zero = 0, count_one = 0;
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		if (n == 0) {
			count_zero++;
			cout << count_zero << " " << count_one << endl;
		}
		if (n == 0) {
			count_zero++;
			cout << count_zero << " " << count_one << endl;
		}
	}
}