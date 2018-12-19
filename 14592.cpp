#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
	if (a.first == b.first) {
		if (a.second.first == b.second.first) {
			return a.second.second < b.second.second;
		}
		else {
			return a.second.first < b.second.first;
		}
	}
	else {
		return a.first > b.first;
	}
}

int main() {
	vector<pair<int, pair<int, int>>> v;
	vector<pair<int, pair<int, int>>> check;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back(pair<int, pair<int, int>>(a, pair<int, int>(b,c)));
		check.push_back(pair<int, pair<int, int>>(a, pair<int, int>(b, c)));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		if (check[i].first == v[0].first&&check[i].second.first == v[0].second.first&&check[i].second.second == v[0].second.second) {
			cout << i + 1;
			break;
		}
	}
}