#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	while (1) {
		getline(cin, s, '\n');
		if (s == "") {
			break;
		}
		for (unsigned int i = 0; i < s.size(); i++) {
			for (int j = 0; j < 26; j++) {
				if (s[i] == char('a' + j)) {
					n1++;
				}
				if (s[i] == char('A' + j)) {
					n2++;
				}
			}
			for (int j = 0; j <= 9; j++) {
				if (s[i] == char('0' + j)) {
					n3++;
				}
			}
			if (s[i] == ' ') {
				n4++;
			}
		}
		cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << endl;
		n1 = 0;
		n2 = 0;
		n3 = 0; 
		n4 = 0;
	}
	return 0;
}