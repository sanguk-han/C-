#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<string> v;
	int cnt = 1;
	int n;

	cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		string check;
		getline(cin, s, '\n');

		for (unsigned int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				v.push_back(check);
				check.clear();
				continue;
			}
			check =  check + s[i];
			if (i == s.size() - 1) {
				v.push_back(check);
			}
		}
		reverse (v.begin(), v.end());

		cout << "Case #" << cnt << ": ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
		cout << endl;
		cnt++;
		v.clear();
	}
}