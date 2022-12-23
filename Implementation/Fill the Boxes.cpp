#include <bits/stdc++.h> 
#define sflld(n) scanf("%lld",&n) 
#define sfulld(n) scanf("%llu",&n) 
#define sfd(n) scanf("%d",&n) 
#define sfld(n) scanf("%ld",&n) 
#define sfs(n) scanf("%s",&n) 
#define ll long long 
#define s(t) int t; while(t--) 
#define ull unsigned long long int 
#define pflld(n) printf("%lld\n",n) 
#define pfd(n) printf("%d\n",n) 
#define pfld(n) printf("%ld\n",n) 
#define lt 2*idx 
#define rt 2*idx+1 
#define f(i,k,n) for(i=k;i<n;i++)
#define MAXN 100005
using namespace std; 
int wt[MAXN],cap[MAXN]; 
int main() { int t,i,j;
 sfd(t);
  while(t--) { int n,m,k,x; sfd(n); sfd(m); sfd(k); f(i,0,n) sfd(cap[i]); f(i,0,m) sfd(wt[i]); sort(cap,cap+n); sort(wt,wt+m); i=0; j=0; int ans=0; while(i<n&&j<m) { if(cap[i]<=wt[j]&&wt[j]<=cap[i]+k) { ans++; i++; j++; } else if(wt[j]<cap[i]) j++; else i++; } pfd(ans); } return 0; }