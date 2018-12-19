#include <iostream>
#include <vector>
using namespace std;
int main() {
	char **c; //그릇의 크기를 표시
	int a, b; //2차원 세계의 크기
	int x = 0; //x좌표
	int temp_b;
	int res = 0; //답
	vector<int> v; //물의 높이가 같은지 비교하는 아이들
	
	cin >> a >> b;
	temp_b = b;
	c = new char*[a];
	for (int i = 0; i < a; i++) {
		c[i] = new char[b];
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			c[i][j] = '0';
		}
	}

	while (temp_b--) {
		int num;
		int y = 0; //y좌표

		cin >> num;

		while (num--) {
			c[y][x] = '*';
			y++;
		}
		x++;
	}

	for (int j = 0; j < b; j++) {
		for (int i = 0; i < a / 2; i++) {
			char temp;
			temp = c[i][j];
			c[i][j] = c[a - 1 - i][j];
			c[a - 1 - i][j] = temp;
		}
	}
	
	for (int i = 0; i < a; i++) {
		if (c[i][0] == '*') {
			v.push_back(0);
		}
		for (int j = 1; j < b; j++) {
			if (c[i][j] == '*') {
				v.push_back(j);
				if (v.size() == 2) {
					res = res + (v[1] - v[0] - 1) * 1;
					v.clear();
					j--;
				}
			}
		}
		v.clear();
	}

	cout << res;
	return 0;
}