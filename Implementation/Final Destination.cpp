#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    cin>>s;int x=0,y=0;

    for(int i=0;i<s.length();i++){

if(s[i]=='L'){x=x-1;}

else if(s[i]=='R'){x=x+1;}

else if(s[i]=='U'){y=y+1;}

else if(s[i]=='D'){y=y-1;}

    }cout<<x<<" "<<y;

}