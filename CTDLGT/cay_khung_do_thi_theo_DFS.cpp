#include <iostream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

int v, e, start, check[10002], parent[10002] ;
vector<int> List[10002] ;
vector<pair<int,int>> ans; 

void DFS(int i)
{
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size()  ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			parent[List[i][j]] = i ;
			ans.push_back({i, List[i][j]}) ; 
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
		cin >> v >> e >> start ;
		memset(check, 0, sizeof(check)) ;
		memset(parent, -1, sizeof(parent)) ;
		ans.clear() ;
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
		if(ans.size() < v - 1)
		{
			cout << "-1\n" ;
		}
		else
		{
			for(auto x : ans)
			{
				cout << x.first << " " << x.second << endl ;
			}
		}
	}
}


