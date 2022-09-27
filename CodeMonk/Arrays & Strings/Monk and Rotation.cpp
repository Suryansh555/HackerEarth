#include<bits/stdc++.h>
using namespace std ;



int main() {
	int T;
	cin >> T ;
	while(T--){
		int N , X ;
		cin >> N >> X ;
		vector<int> arr(N);
		X = X % N ;
		for(int i = 0 ; i < N ; i++){
			cin >> arr[i];
		}
		reverse(arr.begin() , arr.begin() + N - X );
		reverse(arr.begin() + N - X  , arr.begin() + N );
		reverse(arr.begin(), arr.end());
		for(int i = 0 ; i < N ; i++){
			cout << arr[i] << " ";
		}
		cout << endl ;
	}
	return 0 ;
}