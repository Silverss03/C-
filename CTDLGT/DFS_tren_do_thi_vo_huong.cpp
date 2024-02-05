#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int check[1002] ;
vector<int> List[1002] ;
int v, e, start ;

void DFS(int i)
{
	check[i] = 1 ;
	cout << i << " " ;
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
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		memset(check, 0, sizeof(check)) ;
		cin >> v >> e >> start ;
		for(int i = 1 ; i <= e ; i++)
		{
			int x , y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}

		for(int i = 1 ; i <= v ; i++)
		{
			sort(List[i].begin(), List[i].end()) ;
		}
		DFS(start) ;
		for(int i = 1 ; i <= v ; i++) List[i].clear() ;
		cout << endl ;
	}
}

