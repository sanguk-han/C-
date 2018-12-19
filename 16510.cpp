#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, how;
	queue<int> q;
	vector<int> v;

	cin >> n >> how;
	while (n--) {
		int num;
		cin >> num;
		q.push(num);
		v.push_back(num);
	}

	for (int i = 0; i < how; i++) {
		int num;
		int sum = 0;
		int count = 0;

		cin >> num;
		while (1) {
			sum = sum + q.front();
			if (sum <= num) {
				count++;
			}
			else {
				break;
			}
			q.pop();
			if (q.empty()) {
				break;
			}
		}
		while (!q.empty()) {
			q.pop();
		}
		for (int i = 0; i < v.size(); i++) {
			q.push(v[i]);
		}
		cout << count << endl;
	}
}