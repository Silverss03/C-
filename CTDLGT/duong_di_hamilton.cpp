#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int v, e, check[102], res = 0;
vector<int> List[102] ;

void Hamilton(int i, int tmp)
{
	if(tmp == v) res = 1 ;
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			Hamilton(List[i][j], tmp + 1) ;
			check[List[i][j]] = 0 ;
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
			Hamilton(i, 1) ;
			memset(check, 0, sizeof(check)) ;
		}
		cout << res << endl ;
	}
}

