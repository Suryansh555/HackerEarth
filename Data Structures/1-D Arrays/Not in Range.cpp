#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int n;

    cin>>n;

    int a[1000001]={0}, left, right;

    for(int i=0;i<n;i++){

        cin>>left>>right;

        a[left]++;

        a[right+1]--;

    }

    for(int i=1;i<1000001;i++)

        a[i] += a[i-1];

    ll res = 0;

    for(int i=1;i<1000001;i++)

        if(a[i] == 0)

            res += i;

    cout<<res<<endl;

    return 0;

}