#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,g;
	cin >> n >> m >> g ;
	vector<int> N;
	vector<int> M;
	vector<int> res ;
	for(int i = 0; i < n ; i++){
		int x ;
		cin >> x ;
		N.push_back(x);
	}
	for(int i = 0; i < m ; i++){
		int x ;
		cin >> x ;
		M.push_back(x);
	}
	int max = INT_MIN;
	for(int i = 0; i < n - 1; i++){
		int x = N[i+1] - N[i];
		if(x > max){
			max = x ;
		}
		res.push_back(x);
	}
	int c = 0 ;
	for(int i = 0 ; i < m ; i++){
		if(M[i] <= max){
			c++;
		}
	}
	cout << c << endl ;
}

