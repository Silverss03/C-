#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
using namespace std;

int v, e, check[1002], start, finish;
vector<int> List[1002] ;
vector<pair<int, int>> edges ;

void DFS(int i)
{
	check[i] = 1 ;
	for(auto x : List[i])
	{
		if((i == start && x == finish) || (i == finish && x == start))
			continue ;
		if(check[x] == 0) 
			DFS(x) ;
	}
}

void count_connected(int &i)
{
	for(int j = 1 ; j <= v ; j++)
	{
		if(check[j] == 0)
		{
			i++ ;
			DFS(j) ;
		}
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		edges.clear() ;
		memset(check, 0, sizeof(check)) ;
		int connected = 0 ;
		start = finish = -1; 
		cin >> v >> e ;
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			edges.push_back(pair<int,int>({x,y})) ; 
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		
		count_connected(connected) ;
		
		memset(check, 0, sizeof(check)) ;
		
		for(int i = 0 ; i < e ; i++)
		{
			start = edges[i].first ;
			finish = edges[i].second ;
			int new_connected = 0 ;
			count_connected(new_connected) ;
			if(new_connected > connected)
			{
				cout << start << " " << finish << " ";
			}
			memset(check, 0, sizeof(check)) ;
		}
		
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;
		}
		cout << endl ;
	}
}


