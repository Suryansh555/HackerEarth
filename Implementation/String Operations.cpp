#include<iostream>

#include<string>

using namespace std;

int main()

{

    string str;

    cin>>str;

    int q;

    cin>>q;

    while(q--)

    {

        int n;

        char ch;

        cin>>n>>ch;

        str[n-1]=ch;

    }

    cout<<str<<endl;

    string fin=str;

    int m;

    cin>>m;

    while(m--)

    {

        int a,b;

        cin>>a>>b;

        a--;

        b--;

        while(a<b)

        {

            char temp=fin[a];

            fin[a]=fin[b];

            fin[b]=temp;

            a++;

            b--;

        }

    }

    cout<<fin<<endl;

    int count=0;

    for(int i=0;i<str.size();i++)

    {

        if(str[i]==fin[i])

            count++;

    }

    cout<<count<<endl;

}