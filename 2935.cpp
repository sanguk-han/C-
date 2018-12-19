#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	char c;
	cin >> s1;
	cin >> c;
	cin >> s2;
	if (c == '+') {
		string ans;
		if (s1.size() == s2.size()) {
			ans = '2' + ans;
			for (unsigned int i = 1; i < s1.size(); i++) {
				ans = ans + '0';
			}
		}
		else if (s1.size() > s2.size()) {
			string put;
			for (int i = 0; i < s1.size() - s2.size(); i++) {
				put = put + '0';
			}
			s2 = put + s2;
			for (unsigned int i = 0; i < s1.size(); i++) {
				if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1')) {
					ans = ans + '1';
				}
				else {
					ans = ans + '0';
				}
			}
		}
		else {
			string put;
			for (int i = 0; i < s2.size() - s1.size(); i++) {
				put = put + '0';
			}
			s1 = put + s1;
			for (unsigned int i = 0; i < s2.size(); i++) {
				if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1')) {
					ans = ans + '1';
				}
				else {
					ans = ans + '0';
				}
			}
		}
		cout << ans;
	}
	else {
		int check1 = 0, check2 = 0;

		for (unsigned int i = 0; i < s1.size(); i++) {
			if (s1[i] == '0') {
				check1++;
			}
		}

		for (unsigned int i = 0; i < s2.size(); i++) {
			if (s2[i] == '0') {
				check2++;
			}
		}

		cout << "1";
		for (int i = 0; i < check1 + check2; i++) {
			cout << "0";
		}
	}

	return 0;
}