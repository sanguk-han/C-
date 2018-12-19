#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, s1, s2;
	int a, b, n;

	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "P=NP") {
			cout << "skipped" << endl;
		}
		else {
			for (unsigned int i = 0; i < s.size(); i++) {
				if (s[i] == '+') {
					for (unsigned int j = 0; j < i; j++) {
						s1 = s1 + s[j];
					}
					for (unsigned int j = i + 1; j < s.size(); j++) {
						s2 = s2 + s[j];
					}
					break;
				}
			}
			a = stoi(s1);
			b = stoi(s2);
			cout << a + b << endl;
			s1.clear();
			s2.clear();
		}
	}
	return 0;
}