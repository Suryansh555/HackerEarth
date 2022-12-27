#include<iostream>

#include<algorithm>

using namespace std;

int main()

{

    int t;

    cin>>t;

    while(t--)

    {

        int s,x,n;

        cin>>s>>x>>n;

        int arr[n];

        for(int i=0;i<n;i++)

            cin>>arr[i];


 

        int max=arr[0];

        int ans;

        for(int i=0;i<n;i++)

        {

            if(arr[i]>=max)

            {

                max=arr[i];

                ans=i+1;

            }

        }

        sort(arr,arr+n);

        if(arr[n-1]==arr[n-2])

        {

            cout<<"Many Roads"<<endl;

        }

        else

        {

            cout<<ans<<endl;

        }

    }

}