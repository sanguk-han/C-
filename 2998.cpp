#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string s;
	vector<int> v;
	cin >> s;
	for (unsigned int i = s.size() - 1; i >= 0; i-=3) {
		if (i < 3) {
			string q;
			for (int j = i; j >= 0; j--) {
				q = s[j] + q;
			}
			if (q.size() == 1) {
				q = "00" + q;
			}
			if (q.size() == 2) {
				q = "0" + q;
			}
			if (q == "001") {
				v.push_back(1);
			}
			else if (q == "010") {
				v.push_back(2);
			}
			else if (q == "011") {
				v.push_back(3);
			}
			else if (q == "100") {
				v.push_back(4);
			}
			else if (q == "101") {
				v.push_back(5);
			}
			else if (q == "110") {
				v.push_back(6);
			}
			else if (q == "111") {
				v.push_back(7);
			}
			reverse(v.begin(), v.end());
			for (vector<int>::size_type i = 0; i < v.size(); i++) {
				cout << v[i];
			}
			return 0;
		}
		string str;
		str = str + s[i];
		str = s[i - 1] + str;
		str = s[i - 2] + str;
		if (str == "000") {
			v.push_back(0);
		}
		else if (str == "001") {
			v.push_back(1);
		}
		else if (str == "010") {
			v.push_back(2);
		}
		else if (str == "011") {
			v.push_back(3);
		}
		else if (str == "100") {
			v.push_back(4);
		}
		else if (str == "101") {
			v.push_back(5);
		}
		else if (str == "110") {
			v.push_back(6);
		}
		else if (str == "111") {
			v.push_back(7);
		}
	}
}