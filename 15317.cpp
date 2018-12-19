#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, X; //N은 동아리 갯수, M은 동방의 갯수, X는 도와줄 수 있는 예산
	int *ptr1, *ptr2, *ptr3; //ptr1은 동방 보수비용, ptr2는 각 동아리의 예산, ptr3는 동방 보수비용과 동아리 예산의 격차
	int count = 0; //동방을 가질 수 있는 동아리의 갯수
	int small = 0, big = 0; //small은 0보다 작은 수, big은 0보다 같거나 큰 수
	int how; //ptr3의 갯수

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
		ptr3[i] = ptr2[i] - ptr1[i]; //음수면 예산보다 동방 보수 비용이 크다, 양수면 예산이 동방 보수 비용보다 크다
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