#include <bits/stdc++.h>
using namespace std;

int v, e, colors[1002], color_num ;
vector<int> Lists[1002] ;

bool check_col(int vertex, int color){
	for(auto x : Lists[vertex]){
		if(colors[x] == color) return false ;
	}
	return true ;
}
bool check(int vertex){
	if(vertex == v + 1) return true ;
	for(int i = 1 ; i <= color_num ; i++){
		if(check_col(vertex, i)){
			colors[vertex] = i ;
			if(check(vertex + 1)) return true ;
			colors[vertex] = 0 ;
		}
	}
	return false ;
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		memset(colors, 0, sizeof(colors)) ;
		cin >> v >> e >> color_num ;
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ;		
		}	
		for(int i = 1 ; i <= e ; i++){
			int x, y ;
			cin >> x >> y ;
			Lists[x].push_back(y);
			Lists[y].push_back(x) ;
		}
		if(check(1)){
			cout << "YES\n" ;
		}
		else{
			cout << "NO\n" ;
		}
	}
}

