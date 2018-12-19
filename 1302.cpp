#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n, cnt = 0, big, f;
	int *ptr;
	string s;
	set<string> check;
	vector<string> v;
	

	cin >> n;
	while(n--) {
		cin >> s;
		check.insert(s);
		v.push_back(s);
	}

	ptr = new int[check.size()];
	for (int i = 0; i < check.size(); i++) {
		ptr[i] = 0;
	}

	set<string>::iterator iter;
	for (iter = check.begin(); iter != check.end(); iter++) {
		for (int i = 0; i < v.size(); i++) {
			if (*iter == v[i]) {
				ptr[cnt]++;
			}
		}
		cnt++;
	}

	big = ptr[0];
	for (int i = 1; i < cnt; i++) {
		if (big < ptr[i]) {
			big = ptr[i];
		}
	}
	
	for (int i = 0; i < cnt; i++) {
		if (big == ptr[i]) {
			f = i;
			break;
		}
	}

	iter = check.begin();
	while (f--) {
		iter++;
	}

	cout << *iter;
}