#include<iostream>
using namespace std;
int main() {
	int x, y;
	for(x=0;x<=20;x++)
		for (y = 0; y <= 33; y++) {
			if ((100 - x - y) == (100 - 5 * x - 3 * y)*3)
				cout << x << " " << y << " " << 100 - x - y << endl;
		}
	return 0;
}