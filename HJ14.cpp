#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> vec;
	string s;
	for (int i = 0; i < n; i++){
		cin >> s;
		vec.push_back(s);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++) {
		cout << vec[i] << endl;
	}
	return 0;
}