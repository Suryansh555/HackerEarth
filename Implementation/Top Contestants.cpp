#include <bits/stdc++.h>
using namespace std;
int main() {
	int n ;
	cin >> n ;
	int k ; 
	cin >> k ;
	priority_queue<pair<int,int>> pq ;
	for(int i = 0 ; i < n ; i++){
		int x ;
		cin >> x;
		pq.push(make_pair(x,i));
	}
	while(k!=0){
		cout << pq.top().second + 1<< " ";
		pq.pop();
		k--;
	}
}