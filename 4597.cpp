#include <iostream>
#include <string>
using namespace std;
int main() {
	while (1) {
		int count = 0;
		string s;

		cin >> s;
		if (s == "#") {
			break;
		}
		for (unsigned int i = 0; i < s.size(); i++) {
			if (s[i] == '1') {
				count++;
			}
		}
		if (s[s.size() - 1] == 'e') {
			if (count % 2 == 0) {
				s[s.size() - 1] = '0';
			}
			else {
				s[s.size() - 1] = '1';
			}
		}
		else if(s[s.size() - 1] == 'o'){
			if (count % 2 == 0) {
				s[s.size() - 1] = '1';
			}
			else {
				s[s.size() - 1] = '0';
			}
		}
		cout << s << endl;
	}
}