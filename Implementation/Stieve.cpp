#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector <int> A(n), B(n);
 for (int i = 0; i < n; ++i)
 {
 cin>>A[i];
 }
 for (int i = 0; i < n; ++i)
 {
 cin>>B[i];
 }
 map <int,int> val;
 for (int i = 0; i < n; ++i)
 {
 val[A[i]] = max(B[i], val[A[i]]);
 }
 for (int i = 0; i < n; ++i)
 {
 cout<<val[A[i]]<<" ";
 }
 return 0;
}