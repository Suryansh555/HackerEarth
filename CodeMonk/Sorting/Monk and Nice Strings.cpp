#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n ;
	vector<string> ab(n);
	for(int i = 0 ; i < n ; i++){
		string x ;
		cin >> x ;
		ab[i] = x ;
		int count = 0;
		for(int j = 0 ; j < i ; j++){
			if(ab[j] < ab[i]){
				count++;
			}
		}
		cout << count << endl;
	}
}