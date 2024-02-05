#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int v, e, check[1002]; 
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
		int connected = 0, res = 0 ;
		cin >> v >> e ;
		
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;
		}
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x,y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;  		
		}		
		
		for(int i = 1 ; i <= v ; i++)
		{
			if(check[i] == 0)
			{
				connected++ ; 
				DFS(i) ;
			}
		}
		
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= v ; i++)
		{
			check[i] = 1 ;
			int tmp = 0 ; 
			for(int j = 1 ; j <= v ; j++)
			{
				if(check[j] == 0)
				{
					tmp++ ; 
					DFS(j) ;
				}
			}
			if(tmp > connected)
			{
				connected = tmp ; 
				res = i ;
			}
			memset(check, 0, sizeof(check)) ;
			
		}
		
		cout << res << endl;
	}
}

