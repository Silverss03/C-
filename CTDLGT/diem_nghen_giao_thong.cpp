#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, check[102], res ;
vector<int> List[102] ;

void DFS(int i, int len)
{
	if(i == y)
	{
		res = min(res, len) ;
		return ;
	}
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			check[List[i][j]] = 1 ;
			DFS(List[i][j], len + 1 ) ;
			check[List[i][j]] = 0 ;
		}
	}
}
int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		res = 1e9 ;
		cin >> n >> m >> x >> y ;
		memset(check, 0, sizeof(check)) ;
		
		for(int i = 1 ; i <= n ; i++)
		{
			List[i].clear() ;
		}
		
		for(int i = 1 ; i <= m ; i++)
		{
			int x,y ;
			cin >> x >> y ;
			List[x].push_back(y) ; 
		}
		
		if(x != y)
		{
			DFS(x , 1) ;
			check[x] = 1 ;
			cout << res - 2 << endl ;
		}
		else
		{
			cout << 0 << endl ;
		}
		
	}
}

