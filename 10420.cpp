#include <iostream>
using namespace std;

int mdays[][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int Isleap(int n) {
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int year = 2015, month = 4, day = 2, n = 1, all = 0, count;

	cin >> count;

	while (n != year - 1) {
		if (Isleap(n)) {
			all = all + 366;
		}
		else {
			all = all + 365;
		}
		n++;
	}
	if (Isleap(year)) {
		for (int i = 1; i <= month - 1; i++) {
			all = all + mdays[1][i];
		}
		all = all + day + count;
	}
	else {
		for (int i = 1; i <= month - 1; i++) {
			all = all + mdays[0][i];
		}
		all = all + day + count - 1;
	}

	n = 1;

	while (all >= 365) {
		if (Isleap(n)) {
			all = all - 366;
		}
		else {
			all = all - 365;
		}
		n++;
	}
	year = n;
	
	if (Isleap(year)) {
		int check = 1;
		while (1) {
			if (all - mdays[1][check] <= 0) {
				month = check;
				day = all;
				break;
			}
			else {
				all = all - mdays[1][check];
				check++;
			}
		}
	}
	else {
		int check = 1;
		while (1) {
			if (all - mdays[0][check] <= 0) {
				month = check;
				day = all;
				break;
			}
			else {
				all = all - mdays[0][check];
				check++;
			}
		}
	}
	cout << year << '-';
	if (month <= 9) {
		cout << '0' << month << '-';
	}
	else {
		cout << month << '-';
	}
	if (day <= 9) {
		cout << '0' << day;
	}
	else {
		cout << day;
	}
	return 0;
}