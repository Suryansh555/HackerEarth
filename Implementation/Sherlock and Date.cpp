#include <iostream>

using namespace std;

int main()

{

int t,d,y;

string m;

cin>>t;

while(t--)

{

cin>>d>>m>>y;

if(d==1)

{

if(m=="January")

{

cout<<31<<" "<<"December"<<" "<<y-1<<endl;

continue;

}

if(m=="February")

{

cout<<31<<" "<<"January"<<" "<<y<<endl;

continue;

}

if(m=="March")

{

if(y%400==0 || (y%100!=0 && y%4==0))

cout<<29<<" "<<"February"<<" "<<y<<endl;

else

cout<<28<<" "<<"February"<<" "<<y<<endl;

continue;

}

if(m=="April")

{

cout<<31<<" "<<"March"<<" "<<y<<endl;

continue;

}

if(m=="May")

{

cout<<30<<" "<<"April"<<" "<<y<<endl;

continue;

}

if(m=="June")

{

cout<<31<<" "<<"May"<<" "<<y<<endl;

continue;

}

if(m=="July")

{

cout<<30<<" "<<"June"<<" "<<y<<endl;

continue;

}

if(m=="August")

{

cout<<31<<" "<<"July"<<" "<<y<<endl;

continue;

}

if(m=="September")

{

cout<<31<<" "<<"August"<<" "<<y<<endl;

continue;

}

if(m=="October")

{

cout<<30<<" "<<"September"<<" "<<y<<endl;

continue;

}

if(m=="November")

{

cout<<31<<" "<<"October"<<" "<<y<<endl;

continue;

}

if(m=="December")

{

cout<<30<<" "<<"November"<<" "<<y<<endl;

continue;

}

}

else

cout<<d-1<<" "<<m<<" "<<y<<endl;

}

return 0;

}