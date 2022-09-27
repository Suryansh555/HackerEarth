#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T ;
	while(T--){
		int N ;
		cin >> N ;
		long long int count = 0 ;
		vector<vector<int>> arr(N,vector<int>(N));
		for(int i = 0 ; i < N ; i++){
			for(int j = 0 ; j < N ; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 0 ; i < N ; i++){
			for(int j = 0 ; j < N ; j++){
				for(int v = i ; v < N ; v++){
					for(int k = j ; k < N ; k++){
						if(arr[i][j] > arr[v][k]){
							count++;
						}
					}
				}
			}
		}
		cout << count << endl ;
	}
}