#include <iostream>

#define endl "\n"

using namespace std;

int main()

{

int num;

cin>>num;

while(num--)

{

int a,b,c,d,e,f;

cin>>a>>b>>c>>d>>e>>f;

if((e+c<=a)&&(f-d>=0))

{

cout<<"bottom-right"<<endl;

}

else if((e-c>=0)&&(f-d>=0))

{

cout<<"bottom-left"<<endl;

}

else if((e+c<=a)&&(f+d<=b))

{

cout<<"top-right"<<endl;

}

else if(a==1&&(b==0&&c==0&&d==0&&e==0&&f==0)) cout<<"bottom-right"<<endl;

else cout<<"top-left"<<endl;

}

}