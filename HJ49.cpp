#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int n;
	while (cin >> s >> n) {
		cout << s.substr(0, n) << endl;
	}
	return 0;
}