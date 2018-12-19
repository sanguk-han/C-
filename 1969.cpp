#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	char **ptr;
	string s;
	int n, m;
	int mat[4] = { 0 };
	char show[4] = { 'A','C','G','T' };
	int ham = 0;
	int count = 0;

	cin >> n >> m;
	ptr = new char *[n];
	for (int i = 0; i < n; i++) {
		ptr[i] = new char[m];
	}
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (unsigned int j = 0; j < m; j++) {
			ptr[i][j] = s[j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (ptr[j][i] == 'A') {
				mat[0]++;
			}
			else if (ptr[j][i] == 'C') {
				mat[1]++;
			}
			else if (ptr[j][i] == 'G') {
				mat[2]++;
			}
			else {
				mat[3]++;
			}
		}
		int big = mat[0];
		big = big > mat[1] ? big : mat[1];
		big = big > mat[2] ? big : mat[2];
		big = big > mat[3] ? big : mat[3];
		ham = ham + (n - big);
		for (int i = 0; i < 4; i++) {
			if (big == mat[i]) {
				cout << show[i];
				break;
			}
		}
		mat[0] = 0;
		mat[1] = 0;
		mat[2] = 0;
		mat[3] = 0;
	}
	cout << endl;
	cout << ham;
}