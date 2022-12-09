#include<bits/stdc++.h>

#include <iostream>

using namespace std;


 

int main()

{

string s;

cin>>s;

unordered_set<char> P;

for(int i=0; i<s.length(); i++)

{

P.insert(s[i]);

}

int ans=s.length()-P.size();

cout<<ans<<endl;

   

}