#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	getline(cin, s, '\n');
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			if (s[i + 1] == 'p') {
				if (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' || s[i + 2] == 'u') {
					cout << s[i];
					i = i + 2;
					continue;
				}
				else {
					cout << s[i];
				}
			}
			else {
				cout << s[i];
			}
		}
		else {
			cout << s[i];
		}
	}
}