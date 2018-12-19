#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool Compare(pair<string, int> a, pair<string, int>b) {
	return a.second > b.second;
}

int main() {
	vector<pair<string, int>>v;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		for (int i = 0; i < m; i++) {
			int sul;
			string s;
			cin >> s >> sul;
			v.push_back(pair<string, int>(s, sul));
		}
		sort(v.begin(), v.end(),Compare);
		cout << v[0].first << endl;
		v.clear();
	}
	return 0;
}