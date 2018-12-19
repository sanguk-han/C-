#include <iostream>
using namespace std;
int main() {
	int e, f, c, count = 0;
	
	cin >> e >> f >> c;
	e = e + f;
	while (1) {
		count = count + e / c;
		e = e / c + e % c;
		if (e < 3) {
			break;
		}
	}
	cout << count;
}