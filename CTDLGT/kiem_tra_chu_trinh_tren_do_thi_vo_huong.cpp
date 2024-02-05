#include <iostream>
#include <vector>
#include <cstring>
using namespace std ;
int v, e, ans ;
vector<int> List[1002] ;
int check[1002] ;

void DFS(int i, int par)
{
	//cout << i << " " << par << endl; 
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			DFS(List[i][j], i) ;
		}
		else if(List[i][j] != par)
		{
			ans = 1 ;
		}
	}
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
		memset(check, 0, sizeof(check)) ;
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ; 
			cin >> x >> y ; 
			List[x].push_back(y) ;
			List[y].push_back(x) ;  
		}
		
		for(int i = 1 ; i <= v ; i++)
		{
			DFS(i, 0) ; 
			memset(check, 0, sizeof(check)) ;
		}
		if(ans == 1) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

