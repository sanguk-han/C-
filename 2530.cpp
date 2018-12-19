#include <iostream>
using namespace std;
int main() {
	int h, m, s;
	int plus;

	cin >> h >> m >> s;
	cin >> plus;
	
	s = s + plus;

	h = h + s / 3600;
	s = s % 3600;

	m = m + s / 60;
	s = s % 60;

	h = h + m / 60;
	m = m % 60;

	if (h >= 24) {
		h = h % 24;
	}

	cout << h << ' ' << m << ' ' << s;
}