#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int range ;
	cin >> range ;
	for(int i = 0 ; i < range ; i++){
		int W ;
		int H ;
		cin >> W >> H ;
		if(W < num){
			cout << "UPLOAD ANOTHER" << endl;
			continue;
		}
		if(H < num){
		    cout << "UPLOAD ANOTHER" << endl;
			continue ;
		}
		if(W == H){
			cout << "ACCEPTED" << endl;
			continue ;
		}
		else{
			cout << "CROP IT" << endl ;
			continue;
		}
	}
	return 0;
}