#include<bits/stdc++.h>

using namespace std;

int main()

{    

   long long int n;

   cin>>n;

   long long int arr1[n]={0},arr2[n]={0};

   for(long long int i=1;i<=n;i++)

    {

        cin>>arr1[i];

        arr2[i]=arr2[i-1]+arr1[i];

    }

    long long int result=-1;

    for(long long int i=1;i<=n;i++)

    {

        long long int s1=arr2[i];

        long long int s2=arr2[n]-arr2[i];

        if( (s1*s2)>result )

        {

            result=s1*s2;

        }

    }

    cout<<result<<endl;

 

  return 0;

}