#include <iostream>

using namespace std;

int main() {

    int t = 1;

    cin >> t;

    while(t--) {

        string s;

        cin >> s;

        long long cnt = 0, len = s.length(), i, others = 0;

        //Length is max 1e6. Total substrings count will overflow int for some cases.

        for(i = 0; i < len; i++) {

            if(s[i] == 'a' || s[i] == 'z') {

                cnt += (len - i); //ALL substrings starting from this index to the very last index

                if(others) { //we encountered previous characters which are not 'a' or 'z'.

                    cnt += (len - i) * others; //their count will depend on this 'a' or 'z's count. Multiplying by others. As all previous character will depend on this character.

                    others = 0;//to start over

                }

            }

            else {

                others++; //waiting for next 'a' or 'z'! SAD LIFE!!!

            }

        }

        cout << cnt << "\n";

    }

}