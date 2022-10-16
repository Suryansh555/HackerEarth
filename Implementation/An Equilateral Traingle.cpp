#include<iostream>

#include<bits/stdc++.h>

using namespace std;

long long int fact[1000000];

const int M=1e9+7;

void factorial()

{

    fact[0]=1;

    for(int i=1;i<=1000000;i++)

    {

        fact[i]=(fact[i-1]%M*i%M)%M;

    }

}

long  long int inv(long long int x,long long int n)

{

    if(n==0)

        return 1;

    else if(n%2==0)        //n is even

        return inv((x*x)%M,n/2);

    else                             //n is odd

        return(x*inv((x*x)%M,(n-1)/2))%M;


 

}

long long int nCr(int n,int r)

{

    if(r>n)

    return 0;

    long long int ans=fact[n];

   // cout<<ans;

    long long int x=(fact[r]%M*fact[n-r]%M)%M;

    

    ans=(ans%M*inv(x,M-2)%M)%M;

    

    return ans;

}

int main(){

    int n;

    cin>>n;

    factorial();

    long long int res=0;

    for(int i=n;i>=3;i--)

    {

        for(int j= i-2;j>0;j=j-2)

        {

           res=(res%M+nCr(j+1,2)%M)%M;

        }

    }

   cout<<res;


 

}