#include <bits/stdc++.h>
using namespace std ;

int v, e, colors[1002] ;
vector<int> Lists[1002] ; 

bool is_bipartite(int vertex, int color){
	colors[vertex] = color ;
	for(auto x : Lists[vertex]){
		if(colors[x] == colors[vertex]) return false ;
		if(colors[x] == -1 && !is_bipartite(x, 1- color)) return false ;
	}
	return true ;
}
bool check_bipartite(){
	for(int i = 1 ; i <= v ; i++){
		if(colors[i] == -1){
			if(!is_bipartite(i, 0)) return false ;
		}
	}
	return true ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> v >> e ;
		memset(colors, -1 , sizeof(colors)) ;
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x,y ; 
			cin >> x >> y ;
			Lists[x].push_back(y) ; 
			Lists[y].push_back(x) ;
		}
		if(check_bipartite()){
			cout << "YES\n" ;
		}
		else{
			cout << "NO\n" ;
		}
	}
}
