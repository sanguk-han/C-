#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		
		string s1, s2;
		if (s.size() % 2 == 0) {
			for (int i = 0; i < s.size(); i += 2) {
				s1 += s[i];
			}
			for (int i = 1; i < s.size(); i += 2) {
				s2 += s[i];
			}
		}
		else {
			s += s;
			for (int i = 0; i < s.size(); i += 2) {
				s1 += s[i];
			}
			for (int i = 1; i < s.size(); i += 2) {
				s2 += s[i];
			}
		}
		cout << s1 << endl;
		cout << s2 << endl;
	}
}