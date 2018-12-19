#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool Compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(0);
	vector<pair<int, string>> v;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int age;
		cin >> age >> s;
		v.push_back(pair<int, string>(age, s));
	}

	stable_sort(v.begin(), v.end(), Compare);
	
	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}