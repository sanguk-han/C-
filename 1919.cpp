#include <iostream>
#include <string>
using namespace std;
int main() {
	int ptr1[26] = { 0 }, ptr2[26] = { 0 };
	string s1, s2;
	int sum = 0;

	cin >> s1 >> s2;
	for (unsigned int i = 0; i < s1.size(); i++) {
		ptr1[s1[i] - 'a']++;
	}
	for (unsigned int i = 0; i < s2.size(); i++) {
		ptr2[s2[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		int res = abs(ptr1[i] - ptr2[i]);
		sum = sum + res;
	}

	cout << sum;
}