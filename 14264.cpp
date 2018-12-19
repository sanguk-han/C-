#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double L, res;
	cin >> L;
	res = (L * L * sin(120)) / 2.0;
	printf("%.10llf", res);
	return 0;
}