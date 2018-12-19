#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
	int n, m, su, check1, check2, cnt = 1;
	set<int>s;
	vector<int> v;

	cin >> n >> m;
	su = n;
	s.insert(su);
	v.push_back(su);
	check1 = s.size();
	while (1) {
		su = su * n % m;
		s.insert(su);
		v.push_back(su);
		check2 = s.size();
		if (check1 == check2) {
			for (unsigned int i = 0; i < v.size(); i++) {
				if (v[cnt - 1] == su) {
					break;
				}
				cnt++;
			}
			break;
		}
		check1 = check2;
	}
	cout << v.size() - cnt;
}