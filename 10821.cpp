#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int count = 0;

	cin >> s;
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == ',') {
			count++;
		}
	}
	cout << count + 1;
}