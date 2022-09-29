#include <bits/stdc++.h>
using namespace std;
int main() {
	string ab ;
	cin >> ab ;
	int n = ab.length();
	int x ;
	cin >> x ;
	vector<string> str;
	string res = "";
	for(int i = n - 1 ; i >= 0 ; i--){
		res = ab[i] + res ;
		str.push_back(res);
	}
	sort(str.begin(),str.end());
	cout << str[x-1];
	
}