#include<iostream>

using namespace std;


 

void TwoDiffElement(int arr[], int n)

{

    int res=0 , res1=0, res2=0;

 

    for(int i=0; i<n; i++)

    {

        res=res^arr[i];

    }

    int sn=(res)&(~(res-1));

    for(int i=0; i<n; i++)

    {

        if((arr[i]&sn)!=0)

        {

            res1=res1^arr[i];

        }

        else

        {

            res2=res2^arr[i];

        }   

    }

    if(res1<res2)

    cout<<res1<<" "<<res2;

    else

    cout<<res2<<" "<<res1;

}


 

int main()

{

    int n;

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)

{

        cin>>arr[i];

    }

    TwoDiffElement(arr, n);

    return 0;

 

}