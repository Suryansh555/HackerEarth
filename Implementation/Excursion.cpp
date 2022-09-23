#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	for(int i = 0 ; i < num ; i++){
		int N,M,K;
		cin >> N >> M >> K ;
		int count = 0 ;
		count += N/K ;
		count += M/K ;
		if(N % K != 0){
			count++;
		}
		if(M % K != 0){
			count++;
		}
		cout << count << endl ;
	}
}