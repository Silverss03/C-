#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int v, e, start, check[1002]; 
vector<int> List[1002] ;

void BFS(int i)
{
	cout << i << " " ;
	check[i] = 1 ;
	queue<int> qu;
	qu.push(i) ;
	while(!qu.empty())
	{
		int tmp = qu.front() ;
		qu.pop() ;
		for(auto x : List[tmp])
		{
			if(check[x] == 0)
			{
				cout << x << " " ;
				qu.push(x) ;
				check[x] = 1 ; 
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
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y;
			cin >> x >> y ;
			List[x].push_back(y) ; 
		} 
		BFS(start) ;
		cout << endl ;
	}
}

