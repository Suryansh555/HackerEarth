#include<iostream>

#include<string>

#include<cmath>

#include<algorithm>

#include<bitset>

#include<algorithm>

#include<vector>

#include<map>

#include<stack>

#include <iomanip>

#include <ios>

#include <utility>

typedef long long int ll;

#define MOD 1000000007

using namespace std;

int main()

{

int T;cin>>T;

while(T--)

{

int n;

int p,q,r;

cin>>n>>p>>q>>r;

map<int,int> m;

int i=1,x=p;

while(x<=n)

{

m[x]++;

i++;

x=p*i;

}

i=1;

x=q;

while(x<=n)

{

m[x]++;

i++;

x=q*i;

}

i=1;

x=r;

while(x<=n)

{

m[x]++;

i++;

x=r*i;

}

map<int,int> ::iterator it;

int cnt=0;

for(it=m.begin();it!=m.end();it++)

{

if(it->second==1)

{

cnt++;

}

}

cout<<cnt<<endl;

}

return 0;

}