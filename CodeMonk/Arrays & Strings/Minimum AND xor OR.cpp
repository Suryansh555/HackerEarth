#include <bits/stdc++.h>
using namespace std;
int main() {
	int T; 
	cin >> T ;
	while(T--){
		int n ;
		cin >> n ; 
		vector<int> arr(n);
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		sort(arr.begin(),arr.end());
		long long int min = arr[0] ^ arr[1];
		for(int i = 1 ; i < n - 1 ; i++){
			long long int temp = arr[i] ^ arr[i+1] ;
			if(temp < min){
				min = temp ;
			}
		}
		cout << min << endl ;
	}
}