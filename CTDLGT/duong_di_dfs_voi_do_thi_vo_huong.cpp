#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int v, e, check[1002], start, finish, path[1002];
vector<int> List[1002] ;

void DFS(int i)
{
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			path[List[i][j]] = i ;
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
		memset(path, 0, sizeof(path)) ;	
		cin >> v >> e >> start >> finish; 
		
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
		
		DFS(start) ;
		if(path[finish] != 0)
		{
			vector<int> res ;
			while(finish != start)
			{
				res.push_back(finish) ;
				finish = path[finish] ; 
			}
			res.push_back(start) ;
			reverse(res.begin() , res.end()) ;
			for(int i = 0 ; i < res.size() ; i++)
			{
				cout << res[i] << " " ;
			} 
			cout << endl;
		}
	}
}
