#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int v, e, start, target, check[1002], path[1002] ;
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
		for(auto x : List[tmp])
		{
			if(check[x] == 0)
			{
				check[x] = 1;
				path[x] = tmp ;
				qu.push(x) ; 
			}
		}
	} 
}

void out()
{
	if(path[target] == 0)
	{
		cout << "-1\n" ;
	}
	else
	{
		vector<int> res ;
		while(target != start)
		{
			res.push_back(target) ; 
			target = path[target] ; 
		}
		res.push_back(start) ; 
		reverse(res.begin() , res.end() ) ;
		for(auto x : res)
		{
			cout << x << " " ;
		}
	}
}
int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		memset(path, 0, sizeof(path)) ;
		memset(check, 0, sizeof(check)) ;
		cin >> v >> e >> start >> target ;
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
		BFS(start) ;
		cout << endl ;
		out() ;
		cout << endl; 
	}
}

