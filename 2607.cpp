#include <string>
#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
	string s;
	set<char> check1;
	int sum = 0;

	cin >> n;
	cin >> s;
	for (unsigned int i = 0; i < s.size(); i++) {
		check1.insert(s[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		string str;
		set<char> check2;
		cin >> str;
		for (unsigned int i = 0; i < str.size(); i++) {
			check2.insert(str[i]);
		}
		if (check1 == check2) {
			sum++;
		}
	}
	cout << sum;
}