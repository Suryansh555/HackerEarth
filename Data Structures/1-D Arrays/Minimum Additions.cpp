#include<bits/stdc++.h>

#define ll long long int

#define vll vector<long long int>

#define vi vector<int>

#define CUBE(X) X*X*X

using namespace std;

const int N=1e5+10;

 

 

 

int main()

{

   int tt;cin>>tt;

   while(tt--){

       int n;ll k;

       ll sum=0;

       cin>>n>>k;

       vll a;

       for(int i=0;i<n;i++){

           ll x;cin>>x;

           sum+=x;

       }

       ll cnt=0;

       if((sum/n)<=k){

           cout<<0<<endl;

       }else{

         ll cnt=(sum/(k+1))-n+1;

       cout<<cnt<<endl;

       }

 

   }

 }