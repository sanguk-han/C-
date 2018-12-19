#include <iostream>
using namespace std;
int main() {
	int year;
	char c;
	int num, q ,r1, r2;
	cin >> year;
	q = year % 60;
	if (q == 0) {
		q = 60;
	}
	r1 = q % 10;
	r2 = q % 12;
	if (r2 == 0) {
		r2 = r2 + 12;
	}
	cout << char('A' + r2) << r1;
	return 0;
}