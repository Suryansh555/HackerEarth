#include<bits/stdc++.h>

using namespace std;

#define ll long long


 

int main()

{

int t;

cin>>t;

while(t--)

{

string a;

cin>>a;

int n = a.size(), cnt = 0;

int h[26] = {0};

for(int i=0; i<n; i++)

h[a[i] - 'a']++;

for(int i=0; i<26; i++)

if(h[i] > 0)

cnt++;

(cnt%2==0)?cout<<"Player2\n":cout<<"Player1\n";

}

    return 0;

}

