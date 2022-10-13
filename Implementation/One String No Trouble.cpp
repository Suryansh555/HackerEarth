#include<bits/stdc++.h> 
using namespace std; 
int main() {     
	string a;     
	cin>>a;     
	int s=0;     
	int c=0;     
	int k=a.length();     
	for(int i=0;i<k-1;i++)     
	{         
		if(a[i]!=a[i+1])        
		 { 
			 c++;         
		 }         
		else{             
			s=max(s,c);             
			c=0;         
		}     
	}     
	cout<<max(s,c)+1;     
	return 0; 
}