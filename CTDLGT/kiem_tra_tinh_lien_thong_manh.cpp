#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int v, e, check[1002];
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
		memset(check, 0, sizeof(check)) ;
		cin >> v >> e ; 
		int connected = 0 ; 
		
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;	
		}	
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
		}
		
		for(int i = 1 ; i <= v ; i++)
		{
			if(check[i] == 0)
			{
				connected++ ;
				DFS(i) ;
			}
		}
		if(connected == 1) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

