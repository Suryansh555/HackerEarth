#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 1e5 + 14, lg = 30;
int n;
ll cnt[maxn][lg];
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        for(int j = 0; j < lg; j++)
            cnt[i + 1][j] = cnt[i][j] + max(0, (1 << j) - (x & (1 << j + 1) - 1));
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        l--;
        ll ans = LLONG_MAX;
        for(int i = 0; i < lg; i++)
            ans = min(ans, cnt[r][i] - cnt[l][i]);
        cout << ans << '\n';
    }
}