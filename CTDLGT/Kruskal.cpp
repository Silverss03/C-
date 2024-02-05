#include <bits/stdc++.h>
using namespace std ;

struct node{
	int s, e,val; 
};

int v, e, parent[1002], res = 0 ;
vector<node> edges, graph ;

bool cmp(node a, node b){
	return a.val < b.val ;
}

int find(int x){
	if(parent[x] == -1) return x ;
	return find(parent[x]) ;
}

bool check(vector<node> graph){
	memset(parent, -1, sizeof(parent)) ;
	for(auto x : graph){
		int s = find(x.s) ; 
		int e = find(x.e) ;
		if(s == e){
			return true  ;
		}
		parent[e] = s ;
	}
	return false ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		res = 0 ;
		edges.clear() ;
		graph.clear() ;
		cin >> v >> e ; 
		for(int i = 1 ; i <= e ; i++){
			node tmp ;
			cin >> tmp.s ;
			cin >> tmp.e ;
			cin >> tmp.val ;
			edges.push_back(tmp) ;
		}
		sort(edges.begin(), edges.end(), cmp) ;
		for(auto x : edges){
			graph.push_back(x) ;
			if(check(graph)){
				graph.pop_back() ;
			}
			else{
				res += x.val ;
			}
		}
		cout << res << endl ;
	}
}
