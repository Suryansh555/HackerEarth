#include<bits/stdc++.h>

using namespace std;


 

int main()

{

    long long n,m = 0 ;

    cin >> n;


 

    for (int i = 0;i<n;i++)

    {

        long long temp = i^n;

        temp = temp *i;

        if(temp > m)

        {

            m = temp;

        }

    }


 

    cout<<m;

}