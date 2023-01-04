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

        int n;

        cin>>n;

        long long arr[n];

        for(int i=0;i<n;i++)

        {

            cin>>arr[i];

        }

        int count=0;

        int co=0;

        int i=0;

        int flag=0;

        while(i<n)

        {

            flag=0;

            if(arr[i]%2!=0&&arr[i+1]%2!=0)

            {

                count++;

                i+=2;

                flag=1;

            }

            else if(arr[i]%2!=0&&arr[i+1]%2==0)

            {

                co+=2;

                i+=1;

                flag=1;

            }

            if(!flag)

            {

                i++;

            }

        }

        cout<<count+co<<'\n';

    }

    return 0;

}