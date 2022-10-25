#include <iostream>
#include <limits>
#include <vector>
 
using namespace std;
 
#define MAX_N 100000
 
void execTestcase(
 int n,
 vector<int>& arr,
 vector<int>& iA,
 vector<bool>& occupations
);
 
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int t;
 cin >> t;
 vector<int> arr, iA;
 vector<bool> occupations;
 arr.reserve(MAX_N);
 iA.reserve(MAX_N);
 occupations.reserve(MAX_N);
 
for (int i = 0; i < t; i++) {
 int n;
 cin >> n;
 arr.resize(n);
 iA.resize(n);
 occupations.resize(n);
 execTestcase(n, arr, iA, occupations);
 }
 
return 0;
}
 
void execTestcase(
 int n,
 vector<int>& arr,
 vector<int>& iA,
 vector<bool>& occupations
) {
 // scan IA and init occupasions
 for (int i = 0; i < n; i++) {
 int v;
 cin >> v;
 iA[i] = v;
 occupations[i] = false;
 }
 
// scan IR, calculate A and eventually fail if not a solution
 bool isSolution = true;
 for (int i = n - 1; i >= 0; i--) {
 int iR;
 cin >> iR;
 
arr[i] = n - iA[i] - iR;
 isSolution = isSolution &&
 (arr[i] > 0) &&
 !occupations[(arr[i] + n) % n];
 occupations[(arr[i] + n) % n] = true;
 i *= isSolution;
 }
 
cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
// print solution
 if (isSolution) {
 for (auto a : arr) {
 cout << a << " ";
 }
 cout << endl;
 } else {
 cout << "-1" << endl;
 }
}