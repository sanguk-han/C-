#include <iostream>
#include <vector>

int ptr[100001];

void Prime() {
	for (int i = 0; i <= 100000; i++) {
		ptr[i] = i;
	}
	for (int i = 2; i <= 1299709; i++) {
		if (!ptr[i]) {
			continue;
		}
	}
}



using namespace std;


