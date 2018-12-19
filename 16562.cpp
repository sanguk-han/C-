#include <iostream>
#include <set>
using namespace std;

int getParent(long long int parent[], int x) {
	if (parent[x] == x) {
		return x;
	}
	return parent[x] = getParent(parent, parent[x]);
}

void UnionParent(long long int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) {
		parent[b] = a;
	}
	else {
		parent[a] = b;
	}
}

int findParent(long long int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a == b) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	long long int parent[10001], N, M, K, *ptr, sum = 0, *temp;
	set<int> s;
	set<int> res;

	cin >> N >> M >> K;

	ptr = new long long int[N + 1];
	for (int i = 1; i <= N; i++) {
		cin >> ptr[i];
	}

	for (int i = 1; i <= N; i++) {
		parent[i] = i;
	}

	for (int i = 1; i <= M; i++) {
		int a, b;
		cin >> a >> b;
		UnionParent(parent, a, b);
		if (findParent(parent, a, b)) {
			if (ptr[a] > ptr[b]) {
				ptr[a] = ptr[b];
			}
			else {
				ptr[b] = ptr[a];
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		res.insert(ptr[i]);
	}

	set<int>::iterator iter;
	for (iter = res.begin(); iter != res.end(); iter++) {
		sum = sum + *iter;
	}

	if (sum > K) {
		cout << "Oh no";
	}
	else {
		cout << sum;
	}
}