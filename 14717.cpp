#include <iostream>
using namespace std;

double Func(int a, int b, int check) {
	double count = 0;
	for (int i = 1; i <= 10; i++) {
		for (int j = i; j <= 10; j++) {
			if (i == a && j == b) {
				continue;
			}
			if (i == j && i != a && j != a && i != b && j != b) {
				count++;
				continue;
			}
			if ((i + j) % 10 > check && i != j) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int a, b;
	double count = 0;

	cin >> a >> b;

	if (a == b) {
		count = 10 - a;
		printf("%.3lf", 1.0 - count / 153.0);
	}
	else {
		int check = (a + b) % 10;
		switch (check) {
		case 1: printf("%.3lf", Func(a, b, check) / 153.0);
			break;
		case 2: printf("%.3lf", Func(a, b, check) / 153.0);
			break;
		case 3: printf("%.3lf", Func(a, b, check) / 153.0);
			break;
		case 4: printf("%.3lf", Func(a, b, check) / 153.0);
			break;
		case 5: printf("%.3lf", Func(a, b, check) / 153.0);
			break;
		case 6: printf("%.3lf", 1.0 - Func(a, b, check) / 153.0);
			break;
		case 7: printf("%.3lf", 1.0 - Func(a, b, check) / 153.0);
			break;
		case 8: printf("%.3lf", 1.0 - Func(a, b, check) / 153.0);
			break;
		case 9: printf("%.3lf", 1.0 - Func(a, b, check) / 153.0);
			break;
		case 0: printf("%.3lf", 1.0 - Func(a, b, check + 10) / 153.0);
			break;
		}
	}
}