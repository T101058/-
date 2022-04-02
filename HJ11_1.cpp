#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	long long int num;
	cin >> num;
	string s = to_string(num);
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}