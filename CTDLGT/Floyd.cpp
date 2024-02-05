#include <bits/stdc++.h>
using namespace std ;

int v, e, q, d[1002][1002] ;

int main(){
	cin >> v >> e ;
	for(int i = 1; i <= v ; i++){
		for(int j = 1 ; j <= e ; j++){
			if(i != j) d[i][j] = 1e9 ;
			else d[i][j] = 0 ;
		}
	}
	for(int i = 1 ; i <= e ; i++){
		int u, v , d_u_v ;
		cin >> u >> v >> d_u_v ;
		d[u][v] = d[v][u] = d_u_v ;
	}
	for(int k = 1 ; k <= v ; k++){
		for(int i = 1 ; i <= v ; i++){
			for(int j = 1 ; j <= v ; j++){
				if(d[i][j] > d[i][k] + d[k][j]){
					d[i][j] = d[i][k] + d[k][j] ;
				}
			}
		}
	}
	cin >> q ;
	while(q--){
		int x, y ;
		cin >> x >> y ;
		cout << d[x][y] << endl ;
	}
}
