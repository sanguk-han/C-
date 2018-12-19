#include <iostream>
#include <string>
using namespace std;
int main() {
	int N, M;
	string s;

	cin >> N >> M;
	s = to_string(N);

	int how = M / s.size();

	if (N < M) {
		for (int i = 0; i < N; i++) {
			cout << N;
		}
	}
	else {
		while (how--) {
			cout << N;
		}

		for (unsigned int i = 0; i < M % s.size(); i++) {
			cout << s[i];
		}
	}
	return 0;
}