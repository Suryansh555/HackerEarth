#include<bits/stdc++.h>

using namespace std;

int main(){

int t,n;

     cin>>t;

     while(t--){                                   //Testcase

          cin>>n;

          int p=n%4;                           //calculating the remainder

          if(p==0){

cout<<"1"<<" "<<n<<'\n';

          }

          else if(p==1){

cout<<"1"<<" "<<"1"<<'\n';

          }

          else if(p==2){

cout<<"2"<<" "<<n<<" "<<"1"<<'\n';

          }

          else if(p==3){

cout<<"0"<<'\n';

          }

     }

return 0;

}