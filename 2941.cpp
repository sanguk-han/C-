#include <iostream>
#include <string>
using namespace std;

int count[8];

void findString(string parent) {
	int parentSize = parent.size();
	string s1 = "c=";
	string s2 = "c-";
	string s3 = "dz=";
	string s4 = "d-";
	string s5 = "lj";
	string s6 = "nj";
	string s7 = "s=";
	string s8 = "z=";
	for (int i = 0; i < parentSize - s1.size(); i++) {
		bool finded = true;
		for (int j = 0; j < s1.size(); j++) {
			if (parent[i + j] != s1[j]) {
				finded = false;
			}
		}
	}
}