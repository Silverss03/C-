#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int v, e, s, check[1002]; 
vector<int> List[1002] ; 

void DFS(int i)
{
 	check[i] = 1 ;
	for(auto x : List[i])
	{
		if(x != s && check[x] == 0)
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
		s = -1; 
		int connected = 0 ;
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
			s = i ;
			int tmp = 0 ;
			for(int j = 1 ; j <= v ; j++)
			{
				if(j != i && check[j] == 0)
				{
					tmp++ ; 
					DFS(j) ;
				}
			}
			if(tmp > connected) cout << i << " " ;
			memset(check, 0, sizeof(check)) ;
			
		}
		
		cout << endl;
	}
}

