#include <bits/stdc++.h>

using namespace std;


 

const int maxn = 1e4 + 17, mod = 1e9 + 7;

int n;

int main(){

    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;

    bool pat = 1;

    for(int i = 1; i < n; i++){

        int p;

        cin >> p;

        pat &= p == i;

    }

    long long sum = 0;

    for(int i = 0; i < n; i++){

        int x;

        cin >> x;

        sum += x;

    }

    cout << !pat * sum << '\n';

}