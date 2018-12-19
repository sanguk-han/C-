#include <iostream>
#include <algorithm>
using namespace std;

int mat[10];

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x%y);
	}
}

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	mat[0] = (a*b / gcd(a, b))*c / gcd(a*b / gcd(a, b), c);
	mat[1] = (a*b / gcd(a, b))*d / gcd(a*b / gcd(a, b), d);
	mat[2] = (a*b / gcd(a, b))*e / gcd(a*b / gcd(a, b), e);
	mat[3] = (a*c / gcd(a, c))*d / gcd(a*c / gcd(a, c), d);
	mat[4] = (a*c / gcd(a, c))*e / gcd(a*c / gcd(a, c), e);
	mat[5] = (a*d / gcd(a, d))*e / gcd(a*d / gcd(a, d), e);
	mat[6] = (b*c / gcd(b, c))*d / gcd(b*c / gcd(b, c), d);
	mat[7] = (b*c / gcd(b, c))*e / gcd(b*c / gcd(b, c), e);
	mat[8] = (b*d / gcd(b, d))*e / gcd(b*d / gcd(b, d), e);
	mat[9] = (c*d / gcd(c, d))*e / gcd(c*d / gcd(c, d), e);
	sort(mat, mat + 10);
	cout << mat[0];
	return 0;
}