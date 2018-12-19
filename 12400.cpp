#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; 
	int count = 1;
	
	cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin, s, '\n');
		for (unsigned int i = 0; i < s.size(); i++) {
			char c = s[i];
			switch (c) {
			case 'y': s[i] = 'a';
				break;
			case 'n': s[i] = 'b';
				break;
			case 'f': s[i] = 'c';
				break;
			case 'i': s[i] = 'd';
				break;
			case 'c': s[i] = 'e';
				break;
			case 'w': s[i] = 'f';
				break;
			case 'l': s[i] = 'g';
				break;
			case 'b': s[i] = 'h';
				break;
			case 'k': s[i] = 'i';
				break;
			case 'u': s[i] = 'j';
				break;
			case 'o': s[i] = 'k';
				break;
			case 'm': s[i] = 'l';
				break;
			case 'x': s[i] = 'm';
				break;
			case 's': s[i] = 'n';
				break;
			case 'e': s[i] = 'o';
				break;
			case 'v': s[i] = 'p';
				break;
			case 'z': s[i] = 'q';
				break;
			case 'p': s[i] = 'r';
				break;
			case 'd': s[i] = 's';
				break;
			case 'r': s[i] = 't';
				break;
			case 'j': s[i] = 'u';
				break;
			case 'g': s[i] = 'v';
				break;
			case 't': s[i] = 'w';
				break;
			case 'h': s[i] = 'x';
				break;
			case 'a': s[i] = 'y';
				break;
			case 'q': s[i] = 'z';
				break;
			}
		}
		cout << "Case #" << count++  << ": "<< s << endl;
	}
}