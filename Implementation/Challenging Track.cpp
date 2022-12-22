#include <bits/stdc++.h>


 

using namespace std;


 

int main() {

    int t;cin>>t;

while(t--)

{

int n;

long long p;

cin>>n>>p;

int even=1,odd=0;

int cur;cin>>cur;

p-=cur;

for(int i=1;i<n;i++)

{

cin>>cur;

if(cur%2==0)

{

int tempu=cur-even-odd;

if(tempu>0) p-=tempu;

}

else

{

int tempu=cur-even-odd+1;

if(tempu>0) p-=tempu;

}

if(i%2==0)even++;

else odd++;

}

if(p<0) cout<<"No"<<endl;

else cout<<"Yes "<<p<<endl;

}

}

