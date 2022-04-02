#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		int count = 0;
		for (int i = 2; i <= n; i++) {
			int sum = 1;
			for (int j = 2; j <= i / 2; j++) {
				if (i % j == 0)sum = sum + j;
			}
			if (sum == i)count++;
		}
		cout << count << endl;
	}
	return 0;
}