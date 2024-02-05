#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, res = 1 ; 
		cin >> n ; 
		float arr1[505], arr2[505];
		int dp[505] ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr1[i] >> arr2[i];
			dp[i] = 1 ;
		}
		for(int i = 1 ; i < n ; i++)
		{
			for(int j = 0 ; j < i ; j++)
			{
				if(arr1[i] > arr1[j] && arr2[i] < arr2[j])
				{
					//cout << i << " " << j << endl ;
					dp[i] = max(dp[i], dp[j] + 1) ;
					res = max(res, dp[i]) ;
				}
			}
		}
		cout << res << endl; 
	}
}

