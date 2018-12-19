#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> s;
	int n;
	int sum = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}

	while (!s.empty()) {
		sum = sum + s.top();
		s.pop();
	}
	cout << sum;

	return 0;
}