#include <iostream>
using namespace std;

long long int Sum(int n) {
	return ((n + 1)*(n) / 2) % 14579;
}



int main() {
	int a, b;
	long long int res = 1;

	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		int num = Sum(i);
		res = (res * num) % 14579;
	}
	cout << res;
}