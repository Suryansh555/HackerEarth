#include <bits/stdc++.h>

 

using namespace std;

 

bool check(pair<string,int> p1,pair<string,int> p2)

{

if(p1.second!=p2.second)return p1.second<p2.second;

else return p1.first<p2.first;

}

 

int main() {

ios_base::sync_with_stdio(0);

cin.tie(NULL);

    int n;cin>>n;

map<string,pair<int,int>>m; // for storing name,time,score

for(int i=0;i<n;i++)

{

string s;int t;

cin>>s>>t;

m[s].first+=t;

m[s].second++;

}

map<int,vector<pair<string,int>>>m2; //for storing score,(name,time),..

for(auto it:m)

{

string temp=it.first;

int time=it.second.first;

int score=it.second.second;

m2[score].push_back( make_pair(temp,time));

}

for(auto it = m2.begin(); it != m2.end(); it++)

{

sort(it->second.begin(),it->second.end(),check);

}

auto it=m2.end();

it--;int j=1;

for(int i=1;i<=m2.size();i++)

{

for(auto it2:it->second){

cout<<j<<" "<<it2.first<<"\n";j++;}

it--;

}

}