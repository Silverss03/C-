#include <bits/stdc++.h>
using namespace std;

int n, m, u;
bool check[1005] ;
vector<int> List[1005] ;

void dfs(int u)
{
	check[u] = false ;
	cout << u << " " ;
	for(int v : List[u])
	{
		if(check[v])
			dfs(v) ;
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		memset(check, true, sizeof(check)) ;
		for(int i = 0 ; i < 1005 ; i++) List[i].clear() ;
		cin >> n >> m >> u ;
		for(int i = 1; i <= m ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		dfs(u) ;
		cout << endl ;
	}
}

