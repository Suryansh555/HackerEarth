#include <iostream>
using namespace std;

void solve() {
    string str;
    cin>>str;
    int n = str.length();
    
    for(int i = 0 ; i < n ; i++){
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        else
            str[i] = toupper(str[i]);
    }
    
    cout << str << endl ;
}
int main() {
	solve();
}