#include<bits/stdc++.h>

using namespace std;

int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);

int t;

cin>>t;

while(t--)

{

long long int n,m;

cin>>n>>m;

long long int a[n];

for(int i=0;i<n;i++)

cin>>a[i];

map<long long int,long long int>mp;

mp[0]=-1;

long long int prefix[n]={0},sum=0;

long long int Max=0;

for(int i=0;i<n;i++)

{

sum+=a[i];

prefix[i]=sum;

if(mp.find(sum%m)==mp.end())

mp[sum%m]=i;

else

{

if(sum%m==0)

Max=sum;

else

Max=max(Max,sum-prefix[mp[sum%m]]);

}


 

}

cout<<Max/m<<"\n";

}

}