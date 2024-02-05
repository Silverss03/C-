#include <iostream>
#include <cstring>
#include <vector>

using namespace std ;

int n, m, q, check[1002] ;
vector<int> List[1002] ;

void DFS(int i)
{
	check[i] = 1 ;
	for(auto x : List[i])
	{
		if(check[x] == 0)
		{
			DFS(x) ;
		}
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		cin >> n >> m ; 
	
		for(int i = 1 ; i <= n ; i++)
		{
			List[i].clear() ;
		}		
		
		for(int i = 1 ; i <= m ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;  
		}
		
		cin >> q ;
		while(q--)
		{
			int u, v;
			cin >> u >> v ;
			memset(check, 0, sizeof(check)) ;
			DFS(u) ;
			if(check[v] == 1) cout << "YES\n" ;
			else cout << "NO\n" ;
		}
	}
}
