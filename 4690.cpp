#include <iostream>
using namespace std;
int main() {
	int a = 2, flag = 0, check = a;
	while (1) {
		a = check * check * check;
		if (check > 100) {
			break;
		}
		for (int i = 2; i <= 100; i++) {
			for (int j = i+1; j <= 100; j++) {
				for (int k = j+1; k <= 100; k++) {
					if (a == (i * i * i) + (j * j * j) + (k * k * k)) {
						cout << "Cube = " << check << ", Triple = " << '(' << i << ',' << j << ',' << k << ')' << endl;
						flag = 1;
						break;
					}
				}
			}
		}
		check++;
		flag = 0;
	}
}