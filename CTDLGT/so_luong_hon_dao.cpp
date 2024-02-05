#include <iostream>
#include <cstring>
using namespace std;

int m, n, res = 0 ;
int arr[502][502], d_x[10] = {-1, -1, -1, 0, 0, 1, 1, 1}, d_y[10] = {-1, 0, 1, -1, 1, -1, 0, 1} ;


void DFS(int a, int b)
{
	arr[a][b] = 0 ;
	for(int i = 0 ; i < 8 ; i++)
	{
		if(arr[a + d_x[i]][b + d_y[i]] == 1)
		{
			DFS(a + d_x[i], b + d_y[i]) ;
		}
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		res = 0;
		cin >> n >> m ;		
		memset(arr, 0, sizeof(arr)) ;

		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= m ; j++) cin >> arr[i][j] ;
		}
		
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= m ; j++)
			{
				if(arr[i][j] == 1)
				{
					res++ ;
					DFS(i, j) ;
				}
			}
		}
		cout << res << endl; 
	}
}

