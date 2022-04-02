#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		int word = 0;
		int space = 0;
		int num = 0;
		int other = 0;
		for (int i = 0; i < s.length(); i++) {
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				word++;
			else if (s[i] == ' ')
				space++;
			else if (s[i] >= '0' && s[i] <= '9')
				num++;
			else other++;
		}
		cout << word << endl << space << endl << num << endl << other << endl;
	}
	return 0;
}