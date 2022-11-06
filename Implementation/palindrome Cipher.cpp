#include <iostream>

using namespace std;

int main()

{

    int t;

    string s;

    cin>>t;

    while(t--)

    {

        cin>>s;

        long long int product{1};

        int flag{0};

        int p=s.length();

        for(int i{0};i<s.length();i++,p--)

        {

            if(s[i]!=s[p-1])

            {

                flag=1;

                break;

            }

        }

        if(flag==1)

        {

            for(int i{0};i<s.length();i++)

            {

                s[i]=s[i]-96;

                product=product*s[i];

            }

            cout<<product<<endl;

        }

        else

            cout<<"Palindrome"<<endl;

    }

    return 0;

}