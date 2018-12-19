#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string s;
	vector<pair<int,string>> v[17];
	int num;

	cin >> s;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		string str;
		int n;
		cin >> n >> str;
		v[i].push_back(pair<int,string>(n, str));
	}

	for (unsigned int i = 0; i < s.size(); i++) {
		for (int j = 1; j <= num; j++) {
			for (unsigned int k = 0; k < v[j].second.size(); k++) {

			}
		}
	}
}