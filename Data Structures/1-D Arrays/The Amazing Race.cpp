#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()

{

ll mod=1e9+7;

ll t;

cin>>t;

while(t--)

{

ll n;

cin>>n;

vector<ll>arr(n),left(n),right(n);

for(ll i=0;i<n;i++)

cin>>arr[i];

stack<ll>s;

s.push(0);

left[0]=0;

ll indx=1;

while(indx<n)

{

while(!s.empty()&&arr[s.top()]<arr[indx])

{

s.pop();

}

if(s.empty())

left[indx]=indx;

else

left[indx]=indx-s.top();

//cout<<left[indx]<<" ";

s.push(indx);

indx++;

}

while(!s.empty())

s.pop();

s.push(n-1);

right[n-1]=0;

indx=n-2;

while(indx>=0)

{

while(!s.empty()&&arr[s.top()]<arr[indx])

s.pop();

if(s.empty())

right[indx]=n-indx-1;

else

right[indx]=s.top()-indx;

s.push(indx);

indx--;

}

while(!s.empty())

s.pop();

ll ans=INT_MIN,fans=-1;

for(ll i=1;i<=n;i++)

{

//cout<<left[i]<<" ";

ll sight=left[i-1]+right[i-1];

ll total=((sight%mod)*i)%mod;

if(total>ans)

{

ans=total;

fans=i;

}

}

//cout<<endl;

cout<<fans<<endl;

}

}