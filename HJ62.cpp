#include<iostream>
#include<bitset>
using namespace std;
int main() {
	int num;
	while (cin >> num) {
		bitset<32> bs(num);
		cout << bs.count() << endl;
	}
	return 0;
}