#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int count, check[100], n, arr[15][15], s, e ; 
void DFS(int i)
{
	check[i] = 1;
	count++ ; 
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0 && arr[i][j] == 1 ) DFS(j) ; 
	}
}

int main()
{
	map <int, int > mp ;
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	for(int i = 1 ; i <= n ;i++)
	{
		for(int j = 1; j <= n ; j++)
		{
			if(arr[i][j] == 1 || arr[j][i] == 1)
			{
				s = i ; 
				e = j ;
				arr[i][j] = 0 ;
				arr[j][i] = 0 ;
				count = 0 ;
				DFS(1) ;	
				if(count != n )
					if(mp.find(j) == mp.end())mp[i] = j ;
				memset(check, 0, sizeof(check)) ;
				arr[s][e] = 1; 
				arr[e][s] = 1;
			}
		}
	}
	for(auto x : mp)
		cout << x.first << " " << x.second << endl ;
}

