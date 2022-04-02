#include<iostream>
using namespace std;
bool select_7(int n) {
	if (n % 7 == 0)
		return true;
	while (n != 0) {
		if (n % 10 == 7)
			return true;
		n = n / 10;
	}
	return false;
}
int main() {
	int num;
	while (cin >> num) {
		int count = 0;
		for (int i = 1; i <= num; i++) {
			if (select_7(i))
				count++;
		}
		cout << count << endl;
	}
	return 0;
}