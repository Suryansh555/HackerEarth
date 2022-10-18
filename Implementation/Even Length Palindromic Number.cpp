#include<bits/stdc++.h>


 

using namespace std;

const int N=11;


 

int main()

{

    int t;

    cin>>t;


 

    while(t--)

    {

        string n;

        cin>>n;

 

        int a[N]={};

     for(int i=0;i<n.size();i++)

        {

            a[n[i]-'0']++;  

        }


 

        int max=0;

        for(int i=0;i<N;i++)

        {

            if(a[max]<a[i])

            max=i;

        }

        cout<<max<<endl;

    }

    return 0;

}