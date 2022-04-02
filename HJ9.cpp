#include<iostream>
#include<set>
using namespace std;
int main() {
	set<int> s;
	int n;
	cin >> n;
	while (n) {
		int temp = n % 10;
		if (s.find(temp) == s.end())
			cout << temp;
		n = n / 10;
		s.insert(temp);
	}
	cout << endl;
	return 0;
}
