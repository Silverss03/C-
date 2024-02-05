#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct pairs
{
	int n1, n2 ; 
};

bool cmp(pairs a, pairs b)
{
	if(a.n2 != b.n2 ) return a.n2 < b.n2 ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, dp[102], res = 0 ;
		cin >> n ; 
		pairs arr[102] ;
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i].n1 >> arr[i].n2 ;
		sort(arr, arr + n , cmp) ;
		for(int i = 0 ; i < n ; i++)
		{
			dp[i] = 1 ;
			for(int j = 0 ; j < i ; j++)
			{
				if(arr[i].n1 > arr[j].n2 ) dp[i] = max(dp[i], dp[j] + 1) ;	
			}	
			res = max(res, dp[i]) ;
		}
		cout << res << endl ;
	}
}

