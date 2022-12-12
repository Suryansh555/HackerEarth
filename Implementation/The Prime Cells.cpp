#include <bits/stdc++.h>

#define ll long long

#define endl '\n'

const int mod = 1e9 + 7;

using namespace std;

 

int main() {

int prime[401];

for(int i=0;i<=401;i++)

       prime[i]=1;

   prime[0]=0;

   prime[1]=0;

   for(int i=2;i<=401;i++){

       if(prime[i]==1){

           for(int j=2*i;j<=401;j=j+i)

               prime[j]=0;

       }

   }  //prime numbers calculated till 401 since maximum input is 100 so total sum maximum can be only 100+100+100+100=400

   int n;

   cin>>n;

   int a[n+2][n+2];

   for(int i=0;i<n+2;i++){

       for(int j=0;j<n+2;j++)

           a[i][j]=0;

   }

   for(int i=1;i<=n;i++){

       for(int j=1;j<=n;j++)

           cin>>a[i][j];

   }

   int sum=0;

   int count=0;

   for(int i=1;i<=n;i++){

       for(int j=1;j<=n;j++){

           int k=a[i][j-1];

           int d=a[i][j+1];

           int e=a[i-1][j];

           int f=a[i+1][j];

           sum=k+d+e+f;

           if(prime[sum]==1)

               count++;

       }

   }

   cout<<count<<endl;

 

}