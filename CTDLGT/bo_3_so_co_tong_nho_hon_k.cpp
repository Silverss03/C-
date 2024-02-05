#include <iostream>
#include <algorithm>
using namespace std ;

long long arr[5005] ;

int main()
{
	int tests ;
	cin >> tests; 
	while(tests--)
	{
		long long n, sum, res = 0;
		cin >> n >> sum ;
		
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		sort(arr, arr + n) ;
		for(int i = 0 ; i < n ; i++)
		{
			int j = i + 1 ;
			int k = n - 1 ;
			while(j < k)
			{
				if(arr[i] + arr[j] + arr[k] < sum)
				{
					res += k - j ;
					j++ ;
				}
				else
					k-- ;
			}
		}
		cout << res << endl ;
	}
}

