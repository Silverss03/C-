#include <bits/stdc++.h>
using namespace std;

vector<int> Lists[1002] ; 
int v, e, start, fin, check[1002], path[1002] ;

void DFS(int i){
	check[i] = 1 ;
	for(auto x : Lists[i]){
		if(check[x] == 0){
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
		cin >> v >> e  ;
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ; 
		}
		for(int i = 1 ; i <= e ; i++){
			int x,y ; 
			cin >> x >> y  ;
			Lists[x].push_back(y) ;
			Lists[y].push_back(x) ;
		}
		int q ;
		cin >> q ; 
		while(q--){
			memset(check, 0, sizeof(check)) ;
			memset(path, -1, sizeof(path)) ;
			cin >> start >> fin ; 
			DFS(start) ;
			if(path[fin] != -1){
				cout << "YES\n" ;
			}
			else{
				cout << "NO\n" ;
			}
		}
	}
}

