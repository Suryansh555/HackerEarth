#include<bits/stdc++.h>

using namespace std;

#define FF first

#define SS second

#define PB push_back

#define VI vector<long long int>

#define mod 1000000007

#define ll long long  

#define ull unsigned long long

#define all(x) (x).begin(), (x).end()

#define MS1(X) memset((X), -1, sizeof((X)))

#define MS0(X) memset((X), 0, sizeof((X)))

 

ll power(ll x,ll n) {

if(n==0) {

 return 1;

} else if((n%2)==0) {

 return power((x*x)%mod,n/2);

} else {

 return (x*power((x*x)%mod,(n-1)/2))%mod;

}

}

 

int main()

{

#ifndef ONLINE_JUDGE

freopen("input.txt","r",stdin);

freopen("output.txt","w",stdout);

#endif

ll t=1;

cin >> t;

while(t--)

{

 ll n,k,i;

 cin >> n >> k;

 for(i=0;i<n;i++) {

  cin >> k;

 }

 ll temp=power((long long int)2,n);

 cout << (temp*temp)%mod << endl;

}

}

 