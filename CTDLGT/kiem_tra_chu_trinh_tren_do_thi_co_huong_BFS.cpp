#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std ;
int v, e, n ;
vector<int> List[1002] ;
int in_degree[1002] ;

void BFS()
{
	queue<int> qu ; 
	for(int i = 1 ; i <= v ; i++)
	{
		if(in_degree[i] == 0) qu.push(i) ; 
	}
	while(!qu.empty())
	{
		int tmp = qu.front() ;
		qu.pop() ; 
		n++ ;
		for(int i = 0 ; i < List[tmp].size() ; i++)
		{
			in_degree[List[tmp][i]]-- ;
			if(in_degree[List[tmp][i]] == 0) qu.push(List[tmp][i]) ;
		}
	}
}

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		n = 0 ;
		cin >> v >> e ; 
		for(int i = 1; i <= v ; i++)
		{
			List[i].clear() ;
		}
		memset(in_degree, 0, sizeof(in_degree)) ;
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ; 
			cin >> x >> y ; 
			List[x].push_back(y) ;
			in_degree[y]++ ;
		}
		
		BFS() ;
		if(n != v) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

