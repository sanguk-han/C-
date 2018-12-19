#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int what;
	double ans = 0;
	int count = 0;
	string s;

	cin >> s >> what;
	if (what == 10) {
		cout << s;
	}
	else {
		for (unsigned int i = 0; i < s.size() / 2; i++) {
			char c;
			c = s[i];
			s[i] = s[s.size() - 1 - i];
			s[s.size() - 1 - i] = c;
		}
		for (unsigned int i = 0; i < s.size(); i++) {
			if (char('0') <= s[i] && s[i] <= char('9')) {
				ans = ans + int(pow(what, count)*int(s[i] - char('0')));
				count++;
			}
			else if (char('A') <= s[i] && s[i] <= char('Z')) {
				ans = ans + int(pow(what, count)*int(s[i] - char('A') + 10));
				count++;
			}
		}
		cout << int(ans);
	}
	
	return 0;
}