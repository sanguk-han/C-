#include <iostream>
using namespace std;
int main() {
	long double r, l, w, d;
	int count = 1;
	while (1) {
		cin >> r;
		if (r == 0) {
			break;
		}
		cin >> l >> w;
		d = l * l + w * w;
		if (d > 4 * r * r) {
			cout << "Pizza " << count << " does not fit on the table." << endl;
		}
		else{
			cout << "Pizza " << count << " fits on the table." << endl;
		}
		count++;
	}
}