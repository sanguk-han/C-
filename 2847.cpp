#include <iostream>
using namespace std;
int main() {
	int n;
	int ptr[100];
	int ans = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
	}

	for (int i = n - 1; i >= 1; i--) {
		if (ptr[i] <= ptr[i - 1]) {
			ans = ans + (ptr[i - 1] - ptr[i] + 1);
			ptr[i - 1] = ptr[i - 1] - (ptr[i - 1] - ptr[i] + 1);
		}
	}
	
	cout << ans;
}