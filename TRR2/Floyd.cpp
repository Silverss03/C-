#include <iostream>
#include <cstring>
#include <vector>
using namespace std ;

int d[100][100], Next[100][100], n , arr[100][100] ;

void path(int s, int e)
{
	vector<int> path ; 
	path.push_back(s) ; 
	while(s != e)
	{
		s = Next[s][e] ;
		path.push_back(s) ;
	}
	for(int i = 0 ; i < path.size() - 1 ; i++)
	{
		cout << path[i] << " -->   " ;
	}
	cout << e << endl ;
}

int main()
{
	cin >> n ;
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			if(arr[i][j] == 0)
			{
				d[i][j] = 1e9 ;
				Next[i][j] = -1 ; 
			}
			else
			{
				d[i][j] = arr[i][j] ;
				Next[i][j] = j ;
			}
		}
	}
	
	for(int k = 1 ; k <= n ; k++)
	{
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= n ; j++)
			{
				if(d[i][j] > d[i][k] + d[k][j])
				{
					d[i][j] = d[i][k] + d[k][j] ;
					Next[i][j] = Next[i][k] ;
				}
			}
		}
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			if(i != j) cout << "K/c " << i << " -> " << j << " = " << d[i][j] << "; " ;
			else cout << "K/c " << i << " -> " << j << " = " << 0 << "; " ;
			path(i, j) ;
		}
		cout << endl ; 
	}
	
}
