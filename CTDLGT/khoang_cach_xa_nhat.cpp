#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		int arr[100002], inc[100002], dec[100002], n, res = -1 ;
		cin >> n ; 
		
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> arr[i] ;
		}
		
		dec[1] = arr[1] ;
		for(int i = 2 ; i <= n ; i++)
		{
			dec[i] = min(arr[i], dec[i - 1]) ;
		}
		
		inc[n] = arr[n] ;
		for(int i = n - 1 ; i >= 1 ; i--)
		{
			inc[i] = max(arr[i], inc[i + 1]) ;
		}
		
		int i = 1, j = 1;
		while(i <= n && j <= n)
		{
			if(dec[i] < inc[j])
			{
				res = max(res, j - i) ;
				j++ ;
			}
			else
			{
				i++ ;
			}
		}
		
		if(res != 0) cout << res << endl ;
		else cout << -1 << endl ;
	}
}

