#include<bits/stdc++.h>

using namespace std;

 

long int cal(long int c,long int n)   // this will calculate the last possible index and return it.

{

   long int temp=c , count=2;     // count is initially initialized by 2 and then incremented one at a time.

   while(temp+count<=n)

   {

       temp=temp+count;

       count++;

   }

   return temp;

}

 

int main()

{

   long int n,last=0;

   cin>>n;

   long long int arr[n],temp,sum=0,max=-10000000;

   arr[0]=0;                             // we are using one-indexing

   for(long int i=1;i<=n;i++)      // we are using pre-computation technique, were each element stores the total till current element .

   {

       cin>>temp;

       arr[i]=temp+arr[i-1];      // reason of using one indexing

   }

   for(long int i=1;i<n;i++)

   {

       last=cal(i,n);

       sum=arr[last]-arr[i-1];           // benefit of using pre-computation technique  that we get total in o(1) time else we need a loop to calculate the sum.

       if(sum>max)

       {

           max=sum;

       }    

   }

   cout<<max;

   return 0;

}