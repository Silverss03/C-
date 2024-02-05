#include <bits/stdc++.h>
using namespace std;

int arr[305], res[305][305] ;
priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> qu ;
vector<pair<int,int>> List[1005] ;

int main()
{
	int n, m, t, u, v, w, i, j, k ;
	cin >> n>> m >> t;
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++) res[i][j] = 1e9 ;
	}
	while(m--)
	{
		cin >> u >> v >> w ;
		List[u].push_back({w, v}) ;
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= n ; j++) arr[j] = 1e9 ;
		
		arr[i] = 0 ;
		while(!qu.empty()) qu.pop() ;
		qu.push({0, i}) ;
		 
		while(!qu.empty())
		{
			u = qu.top().second ;
			qu.pop() ; 
			for(j = 0 ; j < List[u].size() ; j++)
			{
				v = List[u][j].second ;
				int d_u_v = List[u][j].first ;
				if(arr[u] + d_u_v < arr[v]) 
				{
					res[u][v] = min(res[u][v], d_u_v) ;
					arr[v] = arr[u] + d_u_v ;
					qu.push({arr[v], v}) ; 	
				}	
			} 
		}
	}
	
	while(t--)
	{
		cin >> u >> v ; 
		cout << res[u][v] << endl ;
	}
	
}

