#include <iostream>
#include <vector>
using namespace std;
int main() {
	char **c; //�׸��� ũ�⸦ ǥ��
	int a, b; //2���� ������ ũ��
	int x = 0; //x��ǥ
	int temp_b;
	int res = 0; //��
	vector<int> v; //���� ���̰� ������ ���ϴ� ���̵�
	
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
		int y = 0; //y��ǥ

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