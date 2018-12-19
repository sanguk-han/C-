#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double M, N;
	double x, y;
	double temp_x = 0, temp_y = 0;
	int count = 0;
	cin >> M >> N;
	for (double i = 1; i <= M; i++) {
		x = i;
		y = (N / M) * x;
		count++;

		double a = floor(y - temp_y);
		count = count + a;

		temp_x = x;
		temp_y = y;
	}
	cout << int(count);

	return 0;
}