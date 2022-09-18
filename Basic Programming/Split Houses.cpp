#include <iostream> 
using namespace std; 
int main() { 
	int n; 
	cin >> n; 
	char v[n]; 
	int count = 0; 
	int var = 0; 
	for (int i = 0; i < n; i++) 
	{ 
		cin >> v[i]; 
		if (v[i] == 'H') 
		{ 
			var = var + 1; 
		} 
		else 
		{ 
			var = 0; 
		} 
		
		
		if (var > 1) { 
			cout << "NO"; 
			return 0; 
		} 
			
		if (v[i] == '.') 
		{ 
			v[i] = 'B'; 
			count++; 
		} 
	} 
			
		if (count == 0 and v[0]!='H') 
		{ 
			cout << "NO"; 
		} 
		else
	    { 
			cout << "YES" << endl; 
			for (int i = 0; i < n; i++) { 
				cout << v[i]; 
			} 
		} 
}
