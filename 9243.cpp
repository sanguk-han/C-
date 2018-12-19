#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	int n;
	
	cin >> n;
	cin >> s1;
	cin >> s2;

	if (n % 2 == 1) {
		for (unsigned int i = 0; i < s1.size(); i++) {
			if (s1[i] == '0') {
				s1[i] = '1';
			}
			else {
				s1[i] = '0';
			}
		}
	}
	
	if (s1 == s2) {
		cout << "Deletion succeeded";
	}
	else {
		cout << "Deletion failed";
	}
	
}