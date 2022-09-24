#include<bits/stdc++.h>

#define ll long long int

#define vi vector<int>

#define vll vector<long long int>

#define CUBE(X) X*X*X

ll solve(ll n,int m){

ll temp=m;

while(n>temp){

       temp=temp*m;

   }

return temp/m;

 

}

using namespace std;

 

 

int main()

{

int tt;cin>>tt;

while(tt--){

   ll n;

   int k;

   cin>>n>>k;

 

  bool flag=0;

   while(n!=0){

       ll rem=n%k;

       if(rem==0||rem==1){

           flag=true;

       }else{

       flag=false;

       break;

       }

       n/=k;

       }

       if(flag==true) cout<<"YES\n";

       else cout<<"NO\n";

}

}