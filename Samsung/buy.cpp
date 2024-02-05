#include <bits/stdc++.h>
using namespace std;

long long n, m, d[100002], start ;
priority_queue<pair<int,int> ,vector<pair<int,int>> , greater<pair<int,int>>> qu ;
vector<pair<int,int>> List[100002] ;

void dijkstra(){
	for(int i = 1 ; i <= n ; i++) d[i] = 10e9 ;
	d[start] = 0 ; 
	while(!qu.empty()){
		qu.pop() ;
	}
	qu.push({0, start}) ;
	while(!qu.empty()){
		int u = qu.top().second ;
		qu.pop() ;
		for(int i = 0 ; i < List[u].size() ; i++){
			int v = List[u][i].second ;
			int d_u_v = List[u][i].first ;
			if(d[u] + d_u_v < d[v]){
				d[v] = d[u] + d_u_v ;
				qu.push({d[v], v}) ;
			} 
		}
	}	
}

int main()
{
	start = 0 ;
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++){
		cin >> d[i] ;
		List[0].push_back({d[i], i}) ;
	}
	for(int i = 0 ; i < m ; i++){
		int x, y, z ;
		cin >> x >> y >> z ;
		List[x].push_back({2*z, y}) ;
		List[y].push_back({2*z, x}) ;
	}
	dijkstra() ;
	for(int i = 1 ; i <= n ; i++){
		cout << d[i] << " " ;
	}
}

