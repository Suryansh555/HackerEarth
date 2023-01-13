
 
// Write your code here
#include <iostream>
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
int main()
 
{
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
cout.tie(NULL);
 
 
 
 
int T;
 
cin >> T;
 
while (T--)
 
{
 
int n;
 
cin >> n;
 
long long x, y;
 
cin >> x >> y;
 
const long long N=1e6+2;
 
long long a[n], b[n], c[N]={0}, ans = 0;
 
for (int i = 0; i < n; ++i)
 
{
 
cin >> a[i];
 
c[(a[i] & x) ^ (a[i] & y)]++;
 
}
 
for (int i = 0; i < n; ++i)
 
{
 
cin >> b[i];
 
ans += c[(b[i] & x) ^ (b[i] & y)];
 
}
 
cout << ans << endl;
 
}
 
 
 
return 0;
 
}