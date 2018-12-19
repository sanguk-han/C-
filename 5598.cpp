#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	
	cin >> s;
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') {
			s[i] = 'X';
		}
		else if (s[i] == 'B') {
			s[i] = 'Y';
		}
		else if (s[i] == 'C') {
			s[i] = 'Z';
		}
		else {
			s[i] = char(s[i] - 3);
		}
	}
	cout << s;
}