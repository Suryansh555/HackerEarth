/*  

   Add required header files and function defintiions here

   upload this file to submitty

*/

#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){

   int n;

   cin>>n;

   vector<pair<int,int>> v;

   for(int i=0;i<n;i++){

       int x;

       cin>>x;

       v.push_back({x,i});

   }

   sort(v.begin(),v.end());

   int ans=0;

   int j=0;

   for(int i=0;i<n;i++){

       if(v[j].first!=v[i].first){

           // cout<<v[i-1].second<<" "<<v[j].second<<endl;

           ans+=v[i-1].second-v[j].second;

           j=i;

       }

   }

   // cout<<v[j].second<<" "<<v[n-1].second<<endl;

   ans+=v[n-1].second-v[j].second;

   cout<<ans<<endl;

 

}

int main()

{

   int t;

   cin>>t;

   while(t--){

       solve();

   }

   return 0;

}