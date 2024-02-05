#include <bits/stdc++.h>
using namespace std;

vector<int> List[1002] ;
int v, e, start, fin, check[1002], path[1002] ;

DFS(int i){
	check[i] = 1 ;
	for(auto x : List[i]){
		if(check[x] == 0){
			check[x] = 1 ; 
			path[x] = i ;
			DFS(x) ;
		}
	}
}

int main()
{
	int tests ;
	cin >> tests;
	while(tests--){
		cin >> v >> e >> start >> fin ;
		memset(check, 0, sizeof(check)) ;
		memset(path, -1, sizeof(path)) ;
		for(int i = 1 ; i <= v ; i++){
			List[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
		}
		DFS(start) ;
		if(path[fin] != -1){
			vector<int> vt ;
			vt.push_back(fin) ;
			while(path[fin] != start){
				vt.push_back(path[fin]) ;
				fin = path[fin] ;
			}
			vt.push_back(start) ;
			reverse(vt.begin(), vt.end()) ;
			for(auto x : vt){
				cout << x << " " ;
			}
		}
		else cout << -1 ;
		cout << endl ;
	}	
}

