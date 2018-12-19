#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, pair<int, pair<int, int>>> a, pair<int, pair<int, pair<int, int>>> b) {
	if (a.second.first == b.second.first) {
		if (a.second.second.first == b.second.second.first) {
			return a.second.second.second > b.second.second.second;
		}
		else {
			return a.second.second.first > b.second.second.first;
		}
	}
	else {
		a.second.first > b.second.first;
	}
}
int main() {
	vector<pair<int, pair<int, pair<int, int>>>>v;
	int N, K, rank = 1;
	int know[3];
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int order, g, s, b;
		cin >> order >> g >> s >> b;
		if (i == K - 1) {
			know[0] = g;
			know[1] = s;
			know[2] = b;
		}
		v.push_back(pair<int, pair<int, pair<int, int>>>(order, pair<int, pair<int, int>>(g, pair<int, int>(s, b))));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		if (v[i].second.first == know[0]) {
			if (v[i].second.second.first == know[1]) {
				if (v[i].second.second.second == know[2]) {
					cout << i + 1;
					return 0;
				}
			}
		}
	}
}