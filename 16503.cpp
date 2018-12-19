#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int num[3];
	int res[2] = { 0, };
	char c[2];
	char oper;

	cin >> num[0] >> c[0] >> num[1] >> c[1] >> num[2];
	oper = c[0];
	switch (oper) {
	case '+': res[0] = num[0] + num[1];
		break;
	case '-': res[0] = num[0] - num[1];
		break;
	case '*': res[0] = num[0] * num[1];
		break;
	case '/': res[0] = num[0] / num[1];
		break;
	}
	oper = c[1];
	switch (oper) {
	case '+': res[0] = res[0] + num[2];
		break;
	case '-': res[0] = res[0] - num[2];
		break;
	case '*': res[0] = res[0] * num[2];
		break;
	case '/': res[0] = res[0] / num[2];
		break;
	}
	
	oper = c[1];
	switch (oper) {
	case '+': res[1] = num[1] + num[2];
		break;
	case '-': res[1] = num[1] - num[2];
		break;
	case '*': res[1] = num[1] * num[2];
		break;
	case '/': res[1] = num[1] / num[2];
		break;
	}
	oper = c[0];
	switch (oper) {
	case '+': res[1] = num[0] + res[1];
		break;
	case '-': res[1] = num[0] - res[1];
		break;
	case '*': res[1] = num[0] * res[1];
		break;
	case '/': res[1] = num[0] / res[1];
		break;
	}
	sort(res, res + 2);
	cout << res[0] << endl;
	cout << res[1];
	
	return 0;
}