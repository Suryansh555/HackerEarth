#include<bits/stdc++.h> 

using namespace std; 

int main(){              
	 string v;     
	 cin>>v;     
	 if(((v[0]+v[1])%2==0)&&((v[3]+v[4])%2==0)&&((v[4]+v[5])%2==0)&&((v[7]+v[8])%2==0)&&(v[2]!='A'&&v[2]!='E'&&v[2]!='Y'&&v[2]!='I'&&v[2]!='O'&&v[2]!='U')) cout<<"valid"; else cout<<"invalid"; }