#include <bits/stdc++.h>

using namespace std;

int main()

{

int n;

cin>>n;

int arr[n+1]={0};

for(int i=1;i<=n;i++)

{

cin>>arr[i];

}

for(int i=1;i<=n-1;i++)

{

int temp=arr[i];

arr[i]=0;

arr[i+1]-=temp;

}

bool zerohai=true;

 

for(int i=1;i<=n;i++)

{

if(arr[i]!=0)

{

zerohai=false;

break;

}

}

if(zerohai==true)

cout<<"YES"<<endl;

else

cout<<"NO"<<endl;

return 0;

}