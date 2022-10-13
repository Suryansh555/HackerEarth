#include <iostream>
using namespace std;
int main() {
	string n;
	cin >> n ;
	int len = n.size();
	int count = 0;
	if(n[len-1] == '6'){
		cout << -1 << endl;
		return 0;
	}
	for(int i = 0 ; i < len ; i++){
		if(n[i] == '6'){
			continue;
		}
		count++;
	}
	cout << count << endl;
	return 0 ;
}