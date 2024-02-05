#include <bits/stdc++.h>
using namespace std ;

struct node{
	int s, e, val ;
};

int v, e, d[1002] ;
vector<node> edges ; 

bool Bellman(int i){
	d[i] = 0 ; 
	
	for(int j = 1 ; j <= v - 1 ; j++){
		for(auto x : edges){
			if(d[x.s] != INT_MAX && d[x.s] + x.val < d[x.e]){
				d[x.e] = d[x.s] + x.val ;
			}
		}
	}
	
	for(auto x : edges){
		if(d[x.s] != INT_MAX && d[x.s] + x.val < d[x.e]){
			return true ;
		}
	}
	return false ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		memset(d, INT_MAX, sizeof(d)) ;
		cin >>v >> e ; 
		edges.clear() ; 
		for(int i = 1 ; i <= e ; i++){
			node tmp ;
			cin >> tmp.s >> tmp.e >> tmp.val ;
			edges.push_back(tmp) ;
		}
		if(Bellman(1)){
			cout << "1\n" ;
		}
		else{
			cout << "0\n" ;
		}
	}
}
