#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string s1, s2;
	int num; 
	
	cin >> num;
	while (num--) {
		cin >> s1 >> s2;
		vector<char> v1;
		vector<char> v2;
		for (unsigned int i = 0; i < s1.size(); i++) {
			v1.push_back(s1[i]);
		}
		for (unsigned int i = 0; i < s2.size(); i++) {
			v2.push_back(s2[i]);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		if (v1 == v2) {
			cout << s1 << " & " << s2 << " are anagrams." << endl;
		}
		else {
			cout << s1 << " & " << s2 << " are NOT anagrams." << endl;
		}
	}
}