#include <bits/stdc++.h>
using namespace std ; 

int v, e, start, d[1002] ;
vector<pair<int,int>> Lists[1002] ;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> qu;

void Dijkstra(int start){
	for(int i = 1 ; i <= v ; i++){
		d[i] = INT_MAX ; 
	}
	d[start] = 0 ; 
	qu.push({0, start}) ;
	while(!qu.empty()){
		int u = qu.top().second ;
		qu.pop() ;
		for(auto x : Lists[u]){
			int v = x.second ;
			int d_u_v = x.first ;
			if(d[u] + d_u_v < d[v]){
				d[v] = d[u] + d_u_v ;
				qu.push({d[v], v}) ;
			}
		}
	}
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> v >> e >> start ;
		while(!qu.empty()){
			qu.pop() ;
		}
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y , val ; 
			cin >> x >> y >> val ;
			Lists[x].push_back({val, y}) ;
			Lists[y].push_back({val, x}) ;
		}
		Dijkstra(start) ;
		for(int i = 1 ; i <= v ; i++){
			cout << d[i] << " " ;
		}
		cout << endl ;
	}
}
