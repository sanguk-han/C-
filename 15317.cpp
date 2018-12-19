#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, X; //N�� ���Ƹ� ����, M�� ������ ����, X�� ������ �� �ִ� ����
	int *ptr1, *ptr2, *ptr3; //ptr1�� ���� �������, ptr2�� �� ���Ƹ��� ����, ptr3�� ���� �������� ���Ƹ� ������ ����
	int count = 0; //������ ���� �� �ִ� ���Ƹ��� ����
	int small = 0, big = 0; //small�� 0���� ���� ��, big�� 0���� ���ų� ū ��
	int how; //ptr3�� ����

	cin >> N >> M >> X;
	ptr1 = new int[N];
	ptr2 = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> ptr1[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> ptr2[i];
	}

	if (N > M) {
		how = M;
		ptr3 = new int[M];
	}
	else {
		how = N;
		ptr3 = new int[N];
	}

	for (int i = 0; i < how; i++) {
		ptr3[i] = ptr2[i] - ptr1[i]; //������ ���꺸�� ���� ���� ����� ũ��, ����� ������ ���� ���� ��뺸�� ũ��
	}

	sort(ptr3, ptr3 + how);
	for (int i = 0; i < how; i++) {
		if (ptr3[i] >= 0) {
			break;
		}
		if (ptr3[i] < 0) {
			small++;
		}
	}
	big = how - small;

	if (N > M) {
		count = big;
		for (int i = 0; i < small; i++) {
			if (X + ptr3[i] >= 0) {
				count++;
				X = X + ptr3[i];
			}
			else {
				break;
			}
		}
	}
	else {
		count = big;
		for (int i = 0; i < small; i++) {
			if (X + ptr3[i] >= 0) {
				count++;
				X = X + ptr3[i];
			}
			else {
				break;
			}
		}
	}

	cout << count;

	return 0;
}