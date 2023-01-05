#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll countSetBits(ll num)

{ ll c=0;

for(ll i=0;i<log2(num)+1;i++)

{

c+=(((1LL<<i)&num )>>i==1);

}

return c;

}

ll setBit(ll num,ll pos)

{

ll a=1;

a=a<<pos;

ll ans=num|a;

return ans;

}

int main()

{

ll n;

cin>>n;

vector<ll>v(n);

for(ll i=0;i<n;i++)

cin>>v[i];

 

for(ll i=0;i<n;i++)

{

ll num=v[i];

ll set=countSetBits(num);

ll number=0;

for(ll i=log2(num);set--;i--)

{

number=setBit(number,i);

}

cout<<number<<" ";

}

 

 

return 0;

}

