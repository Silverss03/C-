#include <bits/stdc++.h>
using namespace std ;

int main() {
	int tests;
	cin >> tests;
	while (tests--) {
		int num; 
		cin >> num;
		vector<int> v(num);
		for (int i = 0; i < num; i++)cin >> v[i];
		long long int max = -1000000;
		for (int i = 0; i < num; i++) {
			 long long int x = v[i];
			 if (x > max)max = x;
			for (int j = i+1; j < num; j++) {
				x = x * v[j];
				if (x > max)max = x;
			}
		}

		cout << max << endl;
	}
}
