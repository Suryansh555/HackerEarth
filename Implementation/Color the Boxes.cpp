#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m; cin >> n >> m;

    long long int p =1e9+7,a=1;

    while(m>0){

         a=(a*m)%p;m--;

    } cout << a;

}