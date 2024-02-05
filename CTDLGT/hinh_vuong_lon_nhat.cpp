#include <bits/stdc++.h>
using namespace std;

int a[505][505] , F[505][505] , n, m ;

int qud()
{
	int i, j, ans = 0 ;
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1; j <= m ; j++)
		{
			if(a[i][j]) F[i][j] = min(F[i - 1][j] + 1, min(F[i][j - 1] + 1, F[i - 1][j - 1] + 1)) ;
			ans = max(ans, F[i][j]) ;
		}


	}
	return ans ;
}

int main()
{
	int t, i, j ;
	cin >> t ;
	while(t--)
	{
		memset(F, 0, sizeof(F)) ;
		cin >> n >> m ;
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= m ; j++) cin >> a[i][j] ;
		}
		cout << qud() << endl ;
	}
}

