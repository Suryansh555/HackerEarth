#include <iostream>
using namespace std;
int main() {
	string num;
	cin >> num;    
	int low = 0;
	int len = num.size();
	int high = len - 1;
	while(low <= high){
		if(num[low] != num[high]){
			cout << "NO";
			return 0 ;
		}
			low++; high--;
	}
	cout << "YES" ;
	return 0;
}