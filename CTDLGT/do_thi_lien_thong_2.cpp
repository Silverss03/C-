#include <bits/stdc++.h>
using namespace std;

int n, m, s, e, degree[1005] ;
vector<pair<int, int>> vt ;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		cin >> n >> m ;
		vt.clear() ;
		memset(degree, 0, sizeof(degree)) ;
		
		for(int i = 1 ; i <= m ; i++)
		{
			int u, v;
			cin >> u >> v ;
			degree[u]++ ;
			degree[v]++ ;
			pair<int, int> tmp ;
			tmp.first = u ;
			tmp.second = v ;
			vt.push_back(tmp) ;
		}
		
		for(auto x : vt)
		{
			s = x.first ;
			e = x.second ;
			if(degree[s] == 1 || degree[e] == 1)
			{
				cout << "(" << s << " " << e << ")" << " " ;
			}
		}
		cout << endl ;
	}

}

