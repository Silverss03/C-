#include <bits/stdc++.h>
using namespace std ;

struct node{
	int s, e, val ;
};

int v, e, res = 0, check[1002] ;
vector<node> graph, vt ;

bool cmp(node a, node b){
	if(a.val == b.val){
		if(a.s == b.s){
			return a.e < b.e ;
		}
		return a.s < b.s ;
	}
	return a.val < b.val ;
}

int main(){
	int tests ;
	cin >> tests;
	while(tests--){
		memset(check, 0, sizeof(check)) ;
		check[1] = 1 ;
		graph.clear() ;
		vt.clear() ; 
		res = 0 ;
		cin >> v >> e ; 
		for(int i = 1 ; i <= e ; i++){
			node tmp ;
			cin >> tmp.s >> tmp.e >> tmp.val ;
			vt.push_back(tmp) ; 
		}
		sort(vt.begin() , vt.end() , cmp) ;
		while(graph.size() < v - 1){
			for(auto x : vt){
				if((check[x.s] == 1 && check[x.e] == 0) || (check[x.e] == 1 && check[x.s] == 0)){
					res += x.val ;
					graph.push_back(x) ;
					check[x.s] = check[x.e] = 1 ;
					break ;
				}
			}
		}
		
		cout << res << endl ;
	}
}
