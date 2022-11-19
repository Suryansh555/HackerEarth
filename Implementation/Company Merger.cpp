#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
#define lli long long int
 
void computeFreq(vector<vector<int>> market, int freq[][5])
{
 int marketSize = market.size(), companies, i, j, k;
 
 for (i = 0; i < marketSize; i++)
 {
 companies = market[i].size();
 if (companies > 2)
 for (j = 0; j < companies - 1; j++)
 for (k = j + 1; k < companies; k++)
 {
 freq[min(market[i][j], market[i][k])][max(market[i][j], market[i][k])]++;
 }
 }
}
 
int minimumMergers(vector<vector<int>> companyDetails, int n, int m, int marketCount)
{
 int ans = 0, i, j, k;
 
 vector<vector<int>> market(marketCount);
 for (i = 0; i < n; i++)
 for (j = 0; j < m; j++)
 market[companyDetails[i][j]].push_back(i);
 
 int marketSize = market.size(), companies;
 
 for (i = 0; i < marketSize; i++)
 {
 companies = market[i].size();
 
 while (companies > 2)
 {
 int freq[5][5] = {0}, p, q, x, y;
 computeFreq(market, freq);
 int maxm = -1;
 
 for (j = 0; j < companies - 1; j++)
 for (k = j + 1; k < companies; k++)
 {
 x = min(market[i][j], market[i][k]);
 y = max(market[i][j], market[i][k]);
 if (freq[x][y] > maxm)
 {
 maxm = freq[x][y];
 p = x;
 q = y;
 }
 }
 
 market[i].erase(find(market[i].begin(), market[i].end(), q));
 
 for (j = i + 1; j < marketSize; j++)
 {
 vector<int>::iterator it = find(market[j].begin(), market[j].end(), q);
 if (it != market[j].end())
 {
 market[j].erase(it);
 if (find(market[j].begin(), market[j].end(), p) == market[j].end())
 market[j].push_back(p);
 }
 }
 
 companies--;
 ans++;
 }
 }
 
 return ans;
}
 
int main()
{
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int n, m, i, j, marketCount;
 vector<vector<int>> companyDetails;
 vector<lli> ids;
 cin >> n >> m;
 
 for (i = 0; i < n; i++)
 {
 vector<int> v;
 lli r;
 
 for (j = 0; j < m; j++)
 {
 cin >> r;
 vector<lli>::iterator it = find(ids.begin(), ids.end(), r);
 marketCount = it - ids.begin();
 if (it == ids.end())
 ids.push_back(r);
 v.push_back(marketCount);
 }
 companyDetails.push_back(v);
 }
 
 cout << minimumMergers(companyDetails, n, m, ids.size()) << "\n";
 return 0;
}