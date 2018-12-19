#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int n, count = 0;
	cin >> s;
	cin >> n;
	while (n--) {
		string ss;
		cin >> ss;
		ss = ss + ss;
		for (unsigned int i = 0; i < ss.size() - s.size(); i++) {
			string sss;
			sss = ss.substr(i, s.size());
			if (s == sss) {
				count++;
				break;
			}
		}
	}
	cout << count;
}