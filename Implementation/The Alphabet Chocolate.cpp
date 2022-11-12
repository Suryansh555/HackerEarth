#include <bits/stdc++.h>

using namespace std;

 

int main()

{

int t;

    cin>>t;

while(t--)

        {

string s;

cin>>s;

int arr[s.length()+1];

memset(arr,0,sizeof(arr));

for(int i=0;i<s.length();i++)

            {

if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u') arr[i]=1;

else if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U') arr[i]=1;

}

long long sum=0;

for(int i=0;i<s.length();i++)

            {

if(arr[i]==1) sum+=((s.length()-i)*(i+1));

}

cout<<sum<<"\n";

}

}