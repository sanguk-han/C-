#include <iostream>
#include <string>
using namespace std;

long long int mat[10]; //각 숫자를 셀 변수

void CountNumber(string s) {
	for (unsigned int i = 0; i < s.size(); i++) {
		for (int j = 0; j <= 9; j++) {
			if (s[i] == char(j + '0')) {
				mat[j]++;
				break;
			}
		}
	}
	int num = stoi(s);
	if (num == 1) {
		return;
	}
	s = to_string(num - 1);
	CountNumber(s);
}

int main() {
	string s;
	cin >> s;
	CountNumber(s);
	for (int i = 0; i <= 9; i++) {
		cout << mat[i] << ' ';
	}
	return 0;
}