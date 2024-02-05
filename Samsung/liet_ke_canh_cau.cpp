#include <bits/stdc++.h>
using namespace std;

int v, e, check[1002], edge_f, edge_e ;
vector<int> Lists[1002] ;

void DFS(int i){
	check[i] = 1 ; 
	for(auto x : Lists[i]){
		if((i == edge_f && x == edge_e) || (i == edge_e && x == edge_f)) continue ;
		else if(check[x] == 0) DFS(x) ;
	}
}

int count_connected(){
	int res = 0 ; 
	for(int i = 1; i <= v ; i++){
		if(check[i] == 0){
			res++ ; 
			DFS(i) ;
		}
	}	
	return res ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		edge_f = -1 , edge_e = -1 ;
		cin >> v >> e  ;
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ; 
		}
		
		for(int i = 1 ; i <= e ; i++){
			int x,y ; 
			cin >> x >> y ; 
			Lists[x].push_back(y) ;
			Lists[y].push_back(x) ;
		}
		for(int i = 1 ; i <= v ; i++){
			sort(Lists[i].begin(), Lists[i].end());
		}
		int connected = count_connected() ;
		for(int i = 1 ; i <= v ; i++){
			for(auto x : Lists[i]){
				memset(check, 0, sizeof(check)) ;
				edge_f = i, edge_e = x ;
				if(edge_f < edge_e && count_connected() > connected) cout << edge_f << " " << edge_e << " ";
			}
		}
		cout << endl ;
	}
}

