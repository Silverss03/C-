#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include<map>
using namespace std;

int v, e, odd;
vector<int> List[1002] ;
map<int, int> mp ;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		mp.clear() ;
		odd = 0 ;
		cin >> v >> e ; 
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;
		}	
		for(int i = 1; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ; 
			mp[x]++ ;
			mp[y]++ ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;  
		}
		for(auto x : mp)
		{
			if(x.second % 2 != 0)
			{
				odd++ ;
			}
		}
		if(odd == 0)
		{
			cout << "2\n" ;
		}
		else if(odd == 2)
		{
			cout << "1\n" ;
		}
		else
		{
			cout << "0\n" ;
		}
	}
}

