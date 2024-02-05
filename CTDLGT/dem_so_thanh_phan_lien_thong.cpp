#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int v, e, check[1002], res;
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
		res = 0 ;
		memset(check, 0, sizeof(check)) ;
		cin >> v >> e ; 
		
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;	
		}	
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		
		for(int i = 1 ; i <= v ; i++)
		{
			if(check[i] == 0)
			{
				res++ ;
				DFS(i) ;
			}
		}
		
		cout << res << endl ;
	}
}

