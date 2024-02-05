#include <bits/stdc++.h>
using namespace std;

int n, k, arr[42], ans ;
map<int, int> mp;

int main()
{
	int tests ;
	cin >> tests; 
	while(tests--)
	{
		mp.clear() ;
		ans = 0 ;
		cin >> n >> k ;
		for(int i = 1 ; i <= k ; i++)
		{
			cin >> arr[i] ;
			mp[arr[i]]++ ;
		}
		int i = k ;
		while(i > 0 && arr[i] == n - k + i) i-- ;
		if(i == 0) cout << k << endl ; 
		else
		{
			arr[i]++ ; 
			for(int j = i + 1 ; j <= k ; j++)
			{
				arr[j] = arr[j - 1] + 1 ;
			}
			for(int j = 1 ; j <= k ; j++)
			{
				if(mp[arr[j]] == 0) ans++ ;
			}
			cout << ans << endl ;
		}

	}
}

