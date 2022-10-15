#include<bits/stdc++.h> 
using namespace std; 
int main() {     
    int t;     
    cin >> t;     
    while(t--){ 
        int n,sm=0; 
        cin>>n; 
        string s; 
        cin>>s; 
        map<char,int>m; 
        for(int i=0;i<s.size();i++)
        { 
            m[s[i]]++; 
        } 
        for(auto u:m)
        { 
            sm+=u.second/2;
        } 
    cout<<sm<<endl;     
    } 
}