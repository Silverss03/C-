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
		cout << tmp << endl ;
		memset(check, 0, sizeof(check)) ;
		
	}	
	cout << endl;
}

