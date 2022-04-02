#include<iostream>
#include<set>
#include<string>
using namespace std;
int main() {
	set<char> s;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		s.insert(str[i]);
	}
	cout << s.size() << endl;
	return 0;
}