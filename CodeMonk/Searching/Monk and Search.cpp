#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, i, j, k;
	cin >> n;
	vector<int> arr(n);
	for (i = 0; i < n; ++i) {
	    cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	cin >> k;
	
	int a, x;
	while (k--) {
	    cin >> a >> x;
	    if (a == 0) {
	        cout << n - (lower_bound(arr.begin(), arr.end(), x) - arr.begin()) << endl;
	    } else {
	        cout << n - (upper_bound(arr.begin(), arr.end(), x) - arr.begin()) << endl;
	    }
	}
	
	return 0;
}