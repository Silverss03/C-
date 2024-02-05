#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int v, e , start, check[1002] ;
vector<int> List[1002] ;

void BFS(int i)
{
	queue<int> qu ;
	qu.push(i) ;
	check[i] = 1 ;
	while(!qu.empty())
	{
		int tmp = qu.front() ;
		cout << tmp << " " ;
		qu.pop() ;
		for(auto x : List[tmp])
		{
			if(check[x] == 0)
			{
				check[x] = 1 ;
				qu.push(x) ; 
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
		memset(check, 0, sizeof(check)) ;
		cin >> v >> e >> start ;
		for(int i = 1; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		BFS(start) ;
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;
		}
		cout << endl ;
	}
}

