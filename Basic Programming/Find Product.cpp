#include<bits/stdc++.h>


 

using namespace std;


 

int main()

{

    int n;

    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)

    {

        cin>>arr[i];

    }


 

    long long int res;

    res=1;


 

    for(int i=0;i<n;i++)

    {

        res=(res*arr[i])%(1000000007);

    }

    


 

    cout<<res;

}