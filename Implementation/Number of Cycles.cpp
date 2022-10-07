#include<iostream>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        long int n,ans=0;

        cin>>n;

        ans=n*(n-1)+1;

        cout<<ans<<endl;

    }

    return 0;

}