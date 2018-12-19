#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;

	cin >> n;

	while (n--) {
		int how, *ptr, count = 0, a, b;

		cin >> how;
		ptr = new int[how];
		for (int i = 0; i < how; i++) {
			cin >> ptr[i];
		}
		sort(ptr, ptr + how);

		for (int i = 0; i < how - 2; i++) {
			for (int j = i + 1; j < how - 1; j++) {
				for (int k = j + 1; k < how; k++) {
					a = abs(ptr[i] - ptr[j]);
					b = abs(ptr[j] - ptr[k]);
					if (a == b) {
						count++;
					}
				}
			}
		}
		cout << count << endl;
	}
}