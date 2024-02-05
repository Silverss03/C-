#include <bits/stdc++.h>
using namespace std;

int v, e, color_num, colors[1002] ;
vector<int> List[1002] ;

bool check_col(int vertex, int color){
	for(auto x : List[vertex]){
		if(colors[x] == color){
			return false ;
		}
	}	
	return true ;
}

bool act(int vertex){
	if(vertex == v + 1){
		return true;
	}
	
	for(int color = 1 ; color <= color_num ; color++){
		if(check_col(vertex, color)){
			colors[vertex] = color ;
			if(act(vertex + 1)) return true;
			colors[vertex] = 0 ;
		}
		
	}
	return false;
			
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> v >> e >> color_num ;
		memset(colors, 0, sizeof(colors)) ;
		for(int i = 1 ; i <= v ; i++){
			List[i].clear() ; 
		}
		for(int i = 1 ; i <= e ; i++){
			int x,y ; 
			cin >> x >> y ; 
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		if(act(1)) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

