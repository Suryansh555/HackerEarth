#include<bits/stdc++.h>

#include<string.h>

using namespace std;


 

int main(){

string s;

long long int t,x,i,temp;

cin>>t;

while(t--){

cin>>s;

cin>>x;

for(i=0;i<s.length() && (x);i++)

{

if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')

{

s[i]=s[i] + 1;

x--;

}

}

for (i =0 ;i<s.length() ;i++)

{

cout<<s[i];

}

cout<<endl;

}

return 0;

}