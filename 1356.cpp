#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int count = 0;
	int flag = 0;
	string s1 = "";

	cin >> s;
	count = s.size() - 1;
	for (int i = 0; i < count; i++) {
		string s2 = "";
		int num1 = 1, num2 = 1;

		s1 = s1 + s[i];
		for (int j = i + 1; j < count + 1; j++) {
			s2 = s2 + s[j];
		}
		for (int j = 0; j < s1.size(); j++) {
			for (int k = 0; k <= 9; k++) {
				if (s1[j] == char('0' + k)) {
					num1 = num1 * k;
					break;
				}
			}
		}
		for (int j = 0; j < s2.size(); j++) {
			for (int k = 0; k <= 9; k++) {
				if (s2[j] == char('0' + k)) {
					num2 = num2 * k;
					break;
				}
			}
		}
		if (num1 == num2) {
			flag = 1;
			break;
		}
	}
	if (flag) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}