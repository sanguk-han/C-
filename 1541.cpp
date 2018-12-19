#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<int> v;
	string s;

	cin >> s;
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == '-') {
			int j = i - 1;
			string su;
			while (j >= 0 && s[j] != '-' && s[j] != '+') {
				su = s[j] + su;
				j--;
			}
		}
		if (s[i] == '+') {

		}
	}
}