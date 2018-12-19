#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char mat[5][15] = { '-' };

void String_Mat(string s, int n) {
	for (unsigned int i = 0; i < s.size(); i++) {
		mat[n - 1][i] = s[i];
	}
}

int main() {
	string s1, s2, s3, s4, s5;
	vector<int> v;

	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	cin >> s5;
	
	v.push_back(s1.size());
	v.push_back(s2.size());
	v.push_back(s3.size());
	v.push_back(s4.size());
	v.push_back(s5.size());

	sort(v.begin(), v.end());

	String_Mat(s1, 1);
	String_Mat(s2, 2);
	String_Mat(s3, 3);
	String_Mat(s4, 4);
	String_Mat(s5, 5);

	for (int j = 0; j < v[4]; j++) {
		for (int i = 0; i < 5; i++) {
			if (mat[i][j] == ' ' || mat[i][j] == '\0') {
				continue;
			}
			cout << mat[i][j];
		}
	}
	
	return 0;
}