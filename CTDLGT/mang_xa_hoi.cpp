#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n, m, check[100002], connected ;
vector<int> List[100002] ;

void DFS(int i)
{
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0) DFS(List[i][j]) ;
	}
}

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		connected = 0 ;
		cin >> n >> m ; 
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= n ; i++)
		{
			List[i].clear() ;
		}
		
		for(int i = 0 ; i < m ; i++)
		{
			int x , y ; 
			cin >> x >> y ;
			List[x].push_back(y) ; 
			List[y].push_back(x) ;  
		}
		
		for(int i = 1 ; i <= n ; i++)
		{
			if(check[i] == 0)
			{
				DFS(i) ;
				connected++ ; 
			}
		}
		
		if(connected != 1) cout << "NO\n" ;
		else cout << "YES\n" ;
	}
}

