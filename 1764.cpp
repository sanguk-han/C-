#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int main() {
	vector<string> v1, v2;
	int n, m;
	set<string> s;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v1.push_back(str);
	}
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		v2.push_back(str);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v1[i] == v2[j]) {
				s.insert(v1[i]);
			}
		}
	}

	cout << s.size() << endl;
	set<string>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << endl;
	}

	return 0;
}