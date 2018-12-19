#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<pair<int, int>> v1, v2, res;
	vector<pair<int, int>>dif1, dif2;
	int cnt = 0;
	int n1, n2;

	cin >> n1;
	for (int i = 0; i < n1; i++) {
		int a, b;
		cin >> a >> b;
		v1.push_back(pair<int, int>(a, b));
	}
	for (int i = 0; i < n1 - 1; i++) {
		int a = v1[i].first - v1[i + 1].first;
		int b = v1[i].second - v1[i + 1].second;
		dif1.push_back(pair<int, int>(a, b));
	}

	cin >> n2;
	for (int i = 0; i < n2; i++) {
		int a, b;
		cin >> a >> b;
		v2.push_back(pair<int, int>(a, b));
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 0; i < n2 - 1; i++) {
		for (int j = i + 1; j < n2; j++) {
			if (cnt == n1 - 1) {
				break;
			}
			if (dif1[cnt].first == (v2[i].first - v2[j].first) && dif1[cnt].second == (v2[i].second - v2[j].second)) {
				cnt++;
				res.push_back(pair<int, int>(v2[i].first, v2[i].second));
				res.push_back(pair<int, int>(v2[j].first, v2[j].second));
			}
		}
	}
}