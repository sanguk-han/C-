#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() == s2.size()) {
		int num = s1.size();
		for (int i = 0; i < num; i++) {
			cout << (s1[i] - '0' + s2[i] - '0');
		}
	}
	else if (s1.size() > s2.size()) {
		int num = s1.size();
		string p;
		for (int i = 0; i < s1.size() - s2.size(); i++) {
			p = p + '0';
		}
		s2 = p + s2;
		for (int i = 0; i < num; i++) {
			cout << (s1[i] - '0' + s2[i] - '0');
		}
	}
	else {
		int num = s2.size();
		string p;
		for (int i = 0; i < s2.size() - s1.size(); i++) {
			p = p + '0';
		}
		s1 = p + s1;
		for (int i = 0; i < num; i++) {
			cout << (s1[i] - '0' + s2[i] - '0');
		}
	}
	return 0;
}