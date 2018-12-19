#include <iostream>
using namespace std;

char **ptr1, **ptr2;

void SetX(int n, int m) {
	ptr1 = new char *[n];
	for (int i = 0; i < n; i++) {
		ptr1[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ptr1[i][j] = 'X';
		}
	}
}

void SetDot(int n, int m) {
	ptr2 = new char *[n];
	for (int i = 0; i < n; i++) {
		ptr2[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ptr2[i][j] = '.';
		}
	}
}

void PrintX(int c, int d) {
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			cout << ptr1[i][j];
		}
		if (i == c - 1) {
			break;
		}
		cout << endl;
	}
}

void PrintDot(int c, int d) {
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			cout << ptr2[i][j];
		}
		if (i == c - 1) {
			break;
		}
		cout << endl;
	}
}


int main() {
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	SetDot(c, d);
	SetX(c, d);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (j % 2 == 0) {
				PrintX(c, d);
			}
			else {
				PrintDot(c, d);
			}
		}
		cout << endl;
	}
}