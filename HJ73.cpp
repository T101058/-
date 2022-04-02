#include<iostream>
using namespace std;
int main() {
	int months[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day;
	cin >> year >> month >> day;
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		months[2] = 29;
	int count = 0;
	for (int i = 1; i < month; i++)
		count = count + months[i];
	count = count + day;
	cout << count << endl;
	return 0;
}