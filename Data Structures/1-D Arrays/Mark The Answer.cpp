#include <iostream> 
using namespace std; 
int main() {     
	int i,n,x;     
	cin >> n>>x;     
	int a[n]; 
	for( i=0;i<n;i++)     
		cin>>a[i];      
	int count=0,flag=0;       
	for( i=0;i<n;i++)     {      
		if(a[i]<=x)     
		count++;     
		else     
		flag++;      
		if(flag>1)      
		break;     
	}          
	cout<<count; 
}