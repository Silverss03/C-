#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		int n ;
		cin >> n ;
		int res = n ; 
		int arr[100002] ;
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> arr[i] ;
		}
		sort(arr + 1, arr + n + 1) ; 
		int l = 1, m = n/2, r = m + 1  ;
		while(l <= m && r <= n)
		{
			if(arr[l] * 2 <= arr[r])
			{
				res-- ; 
				l++ ; 
				r++ ;
			}
			else r++ ;
		}
		cout << res << endl ;
	}
}

