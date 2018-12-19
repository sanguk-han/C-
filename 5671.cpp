#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
	int a, b;
	string str;
	set<char> s;

	while (scanf("%d", &a) != EOF) {
		cin >> b;
		int count = 0;
		for (int i = a; i <= b; i++) {
			str = to_string(i);
			for (unsigned int i = 0; i < str.size(); i++) {
				s.insert(str[i]);
			}
			if (s.size() == str.size()) {
				count++;
			}
			s.clear();
			str.clear();
		}
		cout << count << endl;
	}
	return 0;
}