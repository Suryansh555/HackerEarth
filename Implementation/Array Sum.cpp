#include <iostream> 
using namespace std; 
int main() {     long int N[5]={1000000001,1000000002,1000000003,1000000004,1000000005};     long int sum=0;     for (int start=0;start<=4;start++){         sum+=N[start];     }     cout<<sum; }