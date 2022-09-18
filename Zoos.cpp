#include <iostream>
using namespace std;
int main() {
	string  num;
	cin >> num;
	int len = num.size();    
	int zcount = 0;
	int ocount = 0;
	for(int i = 0 ; i < len ; i++ ){
		if(num[i] == 'z'){
			zcount++;
		}
		if(num[i] == 'o'){
			ocount++;
		}
	}
	if(ocount == zcount * 2){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	return 0 ;
}