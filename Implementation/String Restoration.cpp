#include<bits/stdc++.h>

using namespace std;


 

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);


 

int t;

cin>>t;


 

while(t--)

{

int flag=0;

long int n;

cin>>n;


 

 

int i;

int p[n];

for(i=0;i<n;i++)

{

cin>>p[i];

}


 

for(i=0;i<n-1;i++)

{

if((p[i]>p[i+1])||((p[i+1]-p[i])>1)||(p[0]>1))

{

flag=1;

break;

}

}

if(flag==1)

cout<<"-1"<<endl;

else

{

cout<<"a";

for(i=1;i<n;i++)

{

if(p[i-1]!=p[i])

{

int x=96+p[i];

cout<<char(x);

}

else

{

cout<<"a";

}

}

cout<<endl;

}


 

}


 

 

return 0;

}