#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int e, check[1002], ans;
vector<int> List[1002] ;

void DFS(int i)
{
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			DFS(List[i][j]) ;
		}
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		ans = 1 ;
		int e ;
		cin >> e ;
		memset(check, 0, sizeof(check)) ;
		
		for(int i = 1 ; i <= e ; i++)
		{
			List[i].clear() ;
		}
		
		for(int i = 1 ; i < e ; i++)
		{
			int x, y ;
			cin >> x >> y ; 
			List[x].push_back(y) ; 
			List[y].push_back(x) ;  
		}
		
		DFS(1) ;
		for(int i = 1 ; i <= e ; i++)
		{
			if(check[i] == 0)
			{
				ans = 0 ;
			}
		}
		
		if(ans == 0) cout << "NO\n" ;
		else cout << "YES\n" ;
	}
}

