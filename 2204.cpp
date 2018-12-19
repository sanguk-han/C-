#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> v;
	vector<string> check;
	vector<string> res;
	while (1) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			check.push_back(s);
			for (unsigned int i = 0; i < s.size(); i++) {
				s[i] = toupper(s[i]);
			}
			v.push_back(s);
			res.push_back(s);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < res.size(); i++) {
			if (v[0] == res[i]) {
				cout << check[i] << endl;
				break;
			}
		}
		v.clear();
		res.clear();
		check.clear();
	}
}