#include<iostream>
using namespace std;
int main() {
	int m;
	while (cin >> m) {
		int num = m * m * m;
		for (int i = 1; i < num; i++) {
			if (m * i + m * (m - 1) == num) {
				cout << i;
				for (int j = 1; j < m; j++) {
					cout << '+' << i + 2 * j;
				}
				cout << endl;
				break;
			}
		}
	}
	return 0;
}