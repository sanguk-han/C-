#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v;
	int *ptr;
	set<int> s;
	int n, avg, sum = 0, check, count = 0;
	int how = 0;
	int res;

	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		s.insert(num);
	}

	for (int i = 0; i < 10; i++) {
		sum = sum + v[i];
	}
	avg = sum / 10;

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		int count = 0;
		for (int i = 0; i < 10; i++) {
			if (*iter == v[i]) {
				count++;
			}
		}
		if (how < count) {
			how = count;
			res = *iter;
		}
	}

	cout << avg << endl;
	cout << res;
}