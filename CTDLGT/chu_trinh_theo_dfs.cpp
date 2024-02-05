#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std ; 

int v, e, path[1002], ok, check[1002] ;
vector<int> List[1002] ;

void DFS(int i, int parent){
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++){
	    if(check[List[i][j]] == 0){
			path[List[i][j]] = i ; 
			DFS(List[i][j], i) ;
		}
		else if(List[i][j] != parent && List[i][j] == 1){
			ok = 1 ;
			vector<int> vt ;
			vt.push_back(1) ; 
			while(i != 1){
				vt.push_back(i) ;
				i = path[i] ; 
			}
			vt.push_back(1) ;
			reverse(vt.begin() , vt.end() ) ;
			for(auto x : vt){
				cout << x << " " ;
			} 
			cout << endl ;
			return ;
		}

		
	}
}
int main(){
	int tests; 
	cin >> tests ;
	while(tests--){
		memset(check, 0, sizeof(check)) ;
		memset(path, 0, sizeof(path)) ;
		ok = 0 ;
		cin >> v >> e ; 
		for(int i = 1 ; i <= v ; i++){
			List[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x,y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ; 
		}
		for(int i = 1 ; i <= v ; i++){
			sort(List[i].begin() , List[i].end()) ;
		}
		DFS(1, 0) ;
		if(ok == 0){
			cout << "NO\n" ;
		}
	}
}
