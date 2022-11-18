#include<bits/stdc++.h>

using namespace std;

int main(){

long long n;

cin>>n;

long long w[n]={0};

long long h[n]={0};

for(long i=0;i<n;i++){

cin>>w[i]>>h[i];

}

long long sum=0;

long long ans1=0,ans2=0;

long long temp[n]={0};

for(long i=0;i<n;i++){

temp[i]=h[i];

}

sort(temp,temp+n);

reverse(temp,temp+n);

long long max1=temp[0];

long long max2=temp[1];

for(long i=0;i<n;i++){

sum+=w[i];

}


 

for(long i=0;i<n;i++){

ans1=(sum-w[i]);

if(h[i]!=max1){

ans2=max1;

}

else if(h[i]==max1){

ans2=max2;

}

cout<<(ans1*ans2)<<" ";

}


 

return 0;

}