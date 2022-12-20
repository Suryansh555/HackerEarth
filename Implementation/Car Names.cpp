#include<bits/stdc++.h>

#include<cmath>

using namespace std;

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    int i, l, t;

    cin >> t;

    bool cond;

    while (t--)

    {

        cond = false;

        cin>>s;

        l = s.length();

        if (l % 3 != 0)

        {

            cout<<"Not OK\n";

            continue;

        }

        for (i = 0; i < l / 3; i++)

        {

            if (s[0] == s[i] && s[l / 3] == s[i + l / 3] && s[(2) * (l / 3)] == s[i + l / 3 + l / 3])

                cond = true;

            else

            {

                cond = false;

                break;

            }

        }

        if (cond && s[0]!=s[l/3] && s[l/3]!=s[(2)*(l/3)] && s[0]!=s[(2)*(l/3)])

            cout<<"OK\n";

        else

            cout<<"Not OK\n";

    }

    return 0;

}