#include<bits/stdc++.h>
using namespace std ;

#include<iostream>

using namespace std;


 

int main()

{

    int P;

    cin>>P;

    int S;

    cin>>S;

    int T;

    cin>>T;

    int H;

    cin>>H;

 

    int x;

    cin>>x;


 

    int cost=0;

    while(x>0)

    {

        if(S>T)

        {

            cost=cost+P;

            x--;

            S--;

        }

        else if(S<=T)

        {

            cost=cost+H;

            x--;

            S--;

        }

    }
 

    cout<<cost<<endl;

}

