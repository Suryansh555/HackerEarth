#include <iostream>
using namespace std;

int main() {    
    int n,a[100000],i;
    cin>>n;    
    int j=n;    
    for( i=0; i<n; i++)
    {        
        cin>>a[i];    
    }    
    if((a[j-1]%10)==0)    
        cout<<"Yes";    
    else    
        cout<<"No";     
        
    return 0;
}