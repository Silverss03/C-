#include <bits/stdc++.h> 

using namespace std; 

int main() { 
	int tests; 
	cin >> tests; 
	while (tests--) { 
		int n; 
		cin >> n; 
		int ok = 0; 
		for (int b = n / 7; b >= 0; b--) 
		{ 
			int remain = n - 7 * b; 
			if (remain % 4 == 0) 
			{ 
				ok = 1; 
				for (int i = 0; i < remain / 4; i++) 
				{ 
					cout << "4"; 
				} 
				for (int i = 0; i < b; i++) 
				{ 
					cout << "7"; 
				} 
				break; 
			} 
		} 
		if (!ok) cout << -1; 
		cout << endl; 
	} 
}
