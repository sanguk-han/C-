#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s1, s2;
	int count = 1;

	while (1) {
		cin >> s1 >> s2;
		if (s1 == "END" && s2 == "END") {
			break;
		}

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
			cout << "Case " << count << ':' << " same" << endl;
		}
		else {
			cout << "Case " << count << ':' << " different" << endl;
		}
		count++;
	}
}