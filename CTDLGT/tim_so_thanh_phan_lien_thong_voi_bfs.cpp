#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int v, e, check[1002], res;
vector<int> List[1002] ;

void BFS(int i)
{
	check[i] = 1 ;
	queue<int> qu ;
	qu.push(i) ; 
	while(!qu.empty())
	{
		int tmp = qu.front() ;
		qu.pop() ;
		for(int j = 0 ; j < List[tmp].size() ; j++)
		{
			if(check[List[tmp][j]] == 0)
			{
				qu.push(List[tmp][j]) ;
				check[List[tmp][j]] = 1 ; 
			}
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
				BFS(i) ;
			}
		}
		
		cout << res << endl ;
	}
}

