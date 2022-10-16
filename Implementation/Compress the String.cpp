#include <bits/stdc++.h>

using namespace std;

int main()

{

    int t, i, j, sl, l;

    string s;

    cin >> t;

    while (t--)

    {

        cin >> l;

        cin >> s;

        cout << (char)((int)s[0] - 32);

        for (i = 1; i < l; i++)

        {

            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')

            {

                sl = 0;

                for (j = i; j < l; j++)

                {

                    if (s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u')

                        {sl++;i++;}

                    else

                    {

                        i = j - 1;

                        break;

                    }

                }

                cout << sl;

            }

            else

            {

                cout << s[i];

                j = i;

                while (s[i] == s[j])

                    j++;

                i = j - 1;

            }

        }

        cout<<endl;

    }

    return 0;

}