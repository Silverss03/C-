#include <iostream>
#include <vector>
#include <cstring>
using namespace std ;
int v, e, ans ;
vector<int> List[1002] ;
int color[1002], parent[1002] ;

void DFS(int i)
{
	//cout << i << " " << par << endl; 
	color[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(color[List[i][j]] == 0)
		{
			DFS(List[i][j]) ;
		}
		else if(color[List[i][j]] == 1)
		{
			ans = 1 ;
			return ;
		}
	}
	color[i] = 2;
}
int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		ans = 0 ;
		cin >> v >> e ; 
		for(int i = 1; i <= v ; i++)
		{
			List[i].clear() ;
		}
		memset(color, 0, sizeof(color)) ;
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ; 
			cin >> x >> y ; 
			List[x].push_back(y) ;
		}
		
		for(int i = 1 ; i <= v ; i++)
		{
			if(color[i] == 0)
			{
				DFS(i) ;
			}
		}
		if(ans == 1) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

