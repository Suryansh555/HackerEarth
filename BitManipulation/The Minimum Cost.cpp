#include<bits/stdc++.h>

using namespace std;

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(0);

    cout.tie(0);

    int t;

    cin>>t;

    while(t--)

    {

        long long int n,c0,c1;

        cin>>n>>c0>>c1;

        int arr[n];

        int arr1[n];

        int arr2[n];

        for(int i=0;i<n;i++)

        {

            cin>>arr[i];

            arr1[i]=arr[i];

            arr2[i]=arr[i];

        }

        long long sum=0;

        long long s=0;

        for(int i=0;i<n;i++)

        {

            if(i%2!=0)

            {

                arr1[i]=0;

            }

            else

            {

                arr1[i]=1;

            }

        }

        for(int i=0;i<n;i++)

        {

            if(i%2!=0)

            {

                arr2[i]=1;

            }

            else

            {

                arr2[i]=0;

            }

        }

        for(int i=0;i<n;i++)

        {

            if(arr[i]-arr1[i]==1)

            {

                sum+=c1;

            }

            else if(arr[i]-arr1[i]==-1)

            {

                sum+=c0;

            }

        }

        for(int i=0;i<n;i++)

        {

            if(arr[i]-arr2[i]==1)

            {

                s+=c1;

            }

            else if(arr[i]-arr2[i]==-1)

            {

                s+=c0;

            }

        }

        cout<<min(sum,s)<<'\n';

    }

    return 0;

}