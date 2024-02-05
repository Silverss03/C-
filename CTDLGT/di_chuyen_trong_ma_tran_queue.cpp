#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int m , n;
		cin >> m >> n ; 
		int arr[1002][1002], check[1002][1002] ;
		memset(check, -1, sizeof(check)) ;
		for(int i = 1 ; i <= m ; i++)
		{
			for(int j = 1; j <= n ; j++) cin >> arr[i][j] ;
		}
		int i, j , x; 
		queue<pair<int,int>> qu ;
		qu.push({1,1}) ;
		check[1][1] = 0; 
		while(!qu.empty())
		{
			pair<int, int> tmp = qu.front();
			i = tmp.first ;
			j = tmp.second ;
			//cout << i << " " << j << endl ;
			x = arr[i][j] ;
			qu.pop() ;
			if(j + x <= n && check[i][j + x] == -1)
			{
				qu.push({i, j + x}) ;
				check[i][j + x] = check[i][j] + 1 ;  
			}
			if(i + x <= m && check[i + x][j] == -1)
			{
				qu.push({i + x, j}) ;
				check[i + x][j] = check[i][j] + 1 ; 
			}
			if(check[m][n] != -1) break ;
		} 
		cout << check[m][n] << endl ;
	}
}

