#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string ptr[100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ptr[i].size() == ptr[j].size()) {
				int how = ptr[i].size();
				string s1 = ptr[i], s2 = ptr[j];
				for (int k = 0; k < how; k++) {
					if (s1[k] == s2[how - 1 - k]) {
						if (k == how - 1) {
							cout << how << ' ' << s1[how / 2] << endl;
							return 0;
						}
						continue;
					}
					else {
						break;
					}
				}
			}
		}
	}
}