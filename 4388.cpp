#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string s1, s2;
	while (1) {
		int count = 0;
		vector<int> v1;
		vector<int> v2;

		cin >> s1 >> s2;
		if (s1 == "0" && s2 == "0") {
			break;
		}
		if (s1.size() == s2.size()) {
			for (unsigned int i = 0; i < s1.size(); i++) {
				v1.push_back(int(char(s1[i] - '0')));
				v2.push_back(int(char(s2[i] - '0')));
			}
			reverse(v1.begin(), v1.end());
			reverse(v2.begin(), v2.end());
			for (vector<int>::size_type i = 0; i < v1.size(); i++) {
				if (v1[i] + v2[i] >= 10) {
					count++;
					if (i == v1.size() - 1) {
						break;
					}
					v1[i + 1] = v1[i + 1] + 1;
				}
			}
		}
		else if (s1.size() > s2.size()) {
			for (unsigned int i = 0; i < s1.size() - s2.size(); i++) {
				s2 = '0' + s2;
			}
			for (unsigned int i = 0; i < s1.size(); i++) {
				v1.push_back(int(char(s1[i] - '0')));
				v2.push_back(int(char(s2[i] - '0')));
			}
			reverse(v1.begin(), v1.end());
			reverse(v2.begin(), v2.end());
			for (vector<int>::size_type i = 0; i < v1.size(); i++) {
				if (v1[i] + v2[i] >= 10) {
					count++;
					if (i == v1.size() - 1) {
						break;
					}
					v1[i + 1] = v1[i + 1] + 1;
				}
			}
		}
		else if (s1.size() < s2.size()) {
			for (unsigned int i = 0; i < s2.size() - s1.size(); i++) {
				s1 = '0' + s1;
			}
			for (unsigned int i = 0; i < s1.size(); i++) {
				v1.push_back(int(char(s1[i] - '0')));
				v2.push_back(int(char(s2[i] - '0')));
			}
			reverse(v1.begin(), v1.end());
			reverse(v2.begin(), v2.end());
			for (vector<int>::size_type i = 0; i < v2.size(); i++) {
				if (v1[i] + v2[i] >= 10) {
					count++;
					if (i == v1.size() - 1) {
						break;
					}
					v2[i + 1] = v2[i + 1] + 1;
				}
			}
		}
		cout << count << endl;
		v1.clear();
		v2.clear();
	}
}