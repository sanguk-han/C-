#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	
	cin >> a >> b >> c;
	if (b - a == c - b) {
		cout << c - b - 1;
	}
	else if (b - a > c - b) {
		cout << b - 1 - a;
	}
	else {
		cout << c - (b + 1);
	}
}