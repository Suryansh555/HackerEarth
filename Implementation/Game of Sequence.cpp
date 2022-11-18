#include<bits/stdc++.h>

using namespace std;

int main(){

long long t;

cin>>t;

while(t--){

long long n;

cin>>n;

long long array[n]={0};

long long count=0;

for(long i=0;i<n;i++){

cin>>array[i];

count++;

}

sort(array,array+n);

for(long i=0;i<n-1;i++){

if(array[i]==array[i+1]){

count--;

}

}


 

if(count%2==0){

cout<<"Q\n";

}

else{

cout<<"P\n";

}

 

}


 

return 0;

}