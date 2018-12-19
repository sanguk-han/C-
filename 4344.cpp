#include <iostream>
using namespace std;
int main() {
	int n;
	int howmany;
	int * ptr;
	double avg;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		int count = 0;
		cin >> howmany;
		ptr = new int[howmany];
		for (int j = 0; j < howmany; j++) {
			cin >> ptr[j];
			sum = sum + ptr[j];
		}
		avg = (double)sum / (double)howmany;
		for (int j = 0; j < howmany; j++) {
			if (ptr[j] > avg) {
				count++;
			}
		}
		printf("%.3lf", double(count) / double(howmany) * 100);
		cout << '%' << endl;
	}
}