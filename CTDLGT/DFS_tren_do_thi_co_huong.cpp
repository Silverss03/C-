#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int v, e, start, check[1002] ;
vector<int> List[1002] ;

void DFS(int i)
{
	cout << i << " " ;
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
		DFS(start) ;
		cout << endl ;
	}
}

