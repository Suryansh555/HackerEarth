#include <iostream>
using namespace std;
int main() {     long long t;     cin>>t;     while(t--){     long long num;     cin >> num; if(__builtin_popcountll(num)>1){         cout<<1;}         else         cout<<0;         cout<<endl;     } }