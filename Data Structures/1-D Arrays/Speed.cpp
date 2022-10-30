#include <iostream>

using namespace std;


 

int main()

{

    int t;

    cin>>t;


 

    while(t--)

    {

        int n;

        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++)

        {

            cin>>arr[i];

        }

        int count=1;

        int mini=arr[0];

        for(int i=1; i<n; i++)

        {

            if(arr[i]>mini)

            {

continue;


 

            }

            else if(arr[i]<arr[i-1])

            {

                mini=arr[i];

                count++;

            }

        }

        cout<<count<<endl;

    }


 

}

