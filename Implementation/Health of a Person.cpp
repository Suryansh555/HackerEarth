#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const int maxn = 1e6 + 17;


int col[maxn], a[maxn];


int main(){
 int t;
 cin >> t;
 for(int i = 0; i < t; i++){
 	int n, m;
 	cin >> n >> m;
 	for(int i = 1; i <= n; i++)
 		cin >> a[i];
 		memset(col, -1, sizeof col);
 			for(int i = 1; i <= m; i++){
 			int b;
 			cin >> b;
 			for(int j = i; j <= n; j += i)
 				if(col[j] == -1 && a[j] - b <= 0)
 					col[j] = i;
 				}
 			for(int i = 1; i <= n; i++)
	 			cout << col[i] << '\n';
 }
}