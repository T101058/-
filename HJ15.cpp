#include<iostream>
#include<bitset>
using namespace std;
int main() {
	int num;
	cin >> num;
	bitset<32> b(num);
	cout << b.count();
	return 0;
}