#include <bits/stdc++.h>

using namespace std;

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

string str;

getline(cin, str);

string hrs = str.substr(0, 2), min = str.substr(3, 2);

int hr = stoi(hrs), mi = stoi(min),totalmin;

totalmin = (hr*60) + mi;

double times = (totalmin*11)/720 + 1;

cout<<times<<endl;

return 0;

}