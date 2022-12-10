#include <bits/stdc++.h>


 

using namespace std;


 

long int ceil_number(long int x,long int y)

{

float root;

x= abs(x);

y = abs(y);

root = sqrt((x*x) + (y*y));

root = ceil(root);

root = (int)root;

return root;

}


 

int main()

{

int n,k,i;

long int x_arr[100001],y_arr[100001];

// cout<<"Enter n and k : ";

cin>>n>>k;

for(i=0;i<n;i++)

{

cin>>x_arr[i];

}

 

for(i=0;i<n;i++)

{

cin>>y_arr[i];

}

 

int distance[n];

for(i=0;i<n;i++)

distance[i] = ceil_number(x_arr[i],y_arr[i]);

 

sort(distance,distance+n);

 

 

 

 

// cout<<endl<<"Minimum distace : ";

cout<<distance[k-1];


 

}