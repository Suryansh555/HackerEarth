#include<iostream>
 using namespace std;
  int sumnum(int a) { 
	  int sum=0; 
	  int tem; 
	  while(a!=0) { 
		  tem=a%10;
		  sum=sum+tem; 
		  a=a/10; 
	} 
	return sum; 
} 
void display(int num) { 
	if(sumnum(num)%4==0) { 
		cout<<num<<"\n"; 
		} 
	else{ 
		num=num+1; 
		display(num); 
		} 
	} 
	int main() { 
		int t; 
		cin>>t; 
		int a,i; 
		for(int i=0;i<t;i++) { 
			cin>>a; 
			display(a); 
		} 
		return 0; 
	}