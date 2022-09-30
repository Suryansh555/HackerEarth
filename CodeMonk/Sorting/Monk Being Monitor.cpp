#include<bits/stdc++.h>
using namespace std;

int mark[1000001];
set <pair<long long int, long long int>> se;

int main()
{
	int t, n, i, j, x, y;
	cin >> t;
	while (t--) {
		memset(mark, 0, sizeof(mark));
		cin >> n;
		for (i = 0; i < n; ++i) {
			int x ;
			cin >> x;
			mark[x]++;
		}
		x = y = -1;
		for (i = 1; i <= 1000000; ++i) {
		    if (mark[i] && x == -1) {
		        x = i;
		        y = i;
		    }
			if (mark[i] && (mark[i] > mark[x])) x = i;
			if (mark[i] && (mark[i] < mark[y])) y = i;
		}	
		//cout << x << " " << y << endl;
		if (abs(mark[x] - mark[y]) > 0) cout << abs(mark[x]-mark[y]) << endl;
		else cout << -1 << endl;
	}

	return 0;
}