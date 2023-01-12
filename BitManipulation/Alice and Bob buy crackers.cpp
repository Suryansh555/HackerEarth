#include<bits/stdc++.h>

#define ll long long

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);    

using namespace std;

int main()

{

    fast;

    ll t,n,a;

    cin>>n;

    ll i,j,count=0;

    vector<ll> v;

    set<ll,greater<ll>> s;

    for(i=0;i<n;i++)

    {

        cin>>a;

        v.push_back(a);

    }

    for(i=0;i<(1<<n);i++)

    {

        ll su=0;

        for(j=0;j<n;j++)

        {

            if(i&(1<<j))

            {

                su+=v[j];

            }

        }

        if(!(su&1))

            s.insert(su);

    }

    cout<<s.size()-1;

}