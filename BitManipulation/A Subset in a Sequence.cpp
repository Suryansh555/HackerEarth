#include<bits/stdc++.h>

#define ll long long

#define pb push_back

#define mod 1000000007

#define vi vector<int>

#define FOR(i, n) for(int i=0; i<n; i++)

#define FORR(i, n) for(int i=1; i<=n; i++)

#define fi first

#define se second

using namespace std;

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    

    ll tc,n,i,j,cnt;

    ll arr[40];

    arr[0]=1;

    for(i=1;i<40;i++){

        arr[i] = arr[i-1]*3;

    }

    

    cin>>tc;

    while(tc--){

        cin>>n;

        vector<ll> bin;

        ll cnt=0;

        while(n>0){

            bin.pb(n%2);

            if(n%2==1) cnt++;

            n /= 2;

        }

        

        cout<<cnt<<'\n';

        

        for(i=0;i<bin.size();i++){

            if(bin[i] == 1) cout<<arr[i]<<" ";

        }

        cout<<'\n';

    }

        

    return 0;

}