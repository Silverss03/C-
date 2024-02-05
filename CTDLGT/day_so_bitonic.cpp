#include <iostream>
#include <cstring>

using namespace std ;
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, res = 0 ;
		cin >> n ;
		int inc[102], dec[102], arr[102] ; 
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ; 
			inc[i] = arr[i] ; 
			dec[i] = arr[i] ;
		}
		for(int i = 1 ; i < n ; i++)
		{
			for(int j = 0 ; j < i ; j++)
			{
				if(arr[j] < arr[i])
				{
					inc[i] = max(inc[i], inc[j] + arr[i]) ;
				}
			}
		}
		for(int i = n - 2 ; i >= 0 ; i--)
		{
			for(int j = n - 1 ; j > i ; j--)
			{
				if(arr[j] < arr[i])
				{
					dec[i] = max(dec[i], dec[j] + arr[i]) ;
				}
			}
		}
		for(int i = 0 ; i < n ; i++)
		{
			int tmp = dec[i] + inc[i] - arr[i] ;
			res = max(res, tmp) ;
		}
		cout << res << endl ;
	}
}
