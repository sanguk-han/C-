#include <iostream>
#include <set>
using namespace std;
int main() {
	int n;
	int ptr[100000];
	set<int> s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
		s.insert(ptr[i]);
	}

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << ' ';
	}
	return 0;
}