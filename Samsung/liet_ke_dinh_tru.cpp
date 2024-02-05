#include <bits/stdc++.h>
using namespace std;

vector<int> Lists[1002] ;
int v, e, check[1002], edge ; 

void DFS(int i){
	check[i] = 1 ; 
	for(auto x : Lists[i]){
		if(check[x] == 0 && x != edge) DFS(x) ;
	}
}

int count_connected(){
	int res = 0 ; 
	for(int i = 1 ; i <= v ; i++){
		if(check[i] == 0 && i != edge){
			res++ ;
			DFS(i) ;
		}
	}
	return res ;
}

int main()
{
	int tests; 
	cin >> tests;
	while(tests--){
		cin >> v >> e ; 
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y;
			cin >> x >> y ; 
			Lists[x].push_back(y) ;
			Lists[y].push_back(x) ;
		}
		int connected = count_connected() ;
		for(int i = 1 ; i <= v ; i++){
			memset(check, 0, sizeof(check)) ;
			edge = i ;
			if(count_connected() > connected) cout << edge << " " ;
		}
		cout << endl ;
	}
}

