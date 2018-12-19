#include <iostream>
using namespace std;
int main() {
	int m, day;
	int whole = 0;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	cin >> day >> m;
	for (int i = 0; i <= m - 1; i++) {
		whole = whole + month[i];
	}

	whole = whole + day;
	
	int res = whole % 7;
	switch (res) {
	case 1: cout << "Thursday";
		break;
	case 2: cout << "Friday";
		break;
	case 3: cout << "Saturday";
		break;
	case 4: cout << "Sunday";
		break;
	case 5: cout << "Monday";
		break;
	case 6: cout << "Tuesday";
		break;
	case 0: cout << "Wednesday";
		break;
	}
}