#include<bits/stdc++.h>
#define mod 1000000007

#define ll long long

using namespace std;

ll recur(ll sum,ll N,ll k);

int main()

{

ll t;

scanf("%lld", &t);

while(t--)

{

ll n, k;

scanf("%lld%lld", &n, &k);

ll sum = (n*(n + 1)) / 2;

ll N = n / k;

cout<<recur(sum,N,k)<<"\n";

}

return 0;

}

ll recur(ll sum,ll N,ll k)

{

sum = sum - k*(N*(N + 1)/2) + (N*(N + 1)/ 2);

N = N / k;

if(N<=0)

return sum;

recur(sum,N,k);

}