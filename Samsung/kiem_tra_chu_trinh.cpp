#include <bits/stdc++.h>
using namespace std;

int v, e, check[1002], res ; 
vector<int> List[1002] ; 

void DFS(int i , int parent){
	check[i] = 1 ; 
	for(auto x : List[i]){
		if(x != parent && check[x] == 1){
			res = 1 ; 
		}
		else if(check[x] == 0){
			DFS(x, i) ;
		}
	}
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		res = 0 ;
		memset(check , 0 , sizeof(check)) ;
		cin >> v >> e ; 
		for(int i = 1 ; i <= v ; i++){
			List[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y ; 
			cin >> x >> y ; 
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		for(int i = 1 ; i <= v ; i++){
			if(check[i] == 0){
				DFS(i, 0) ; 
			}
		}
		if(res == 0) cout << "NO\n" ;
		else cout << "YES\n" ;
	}
}

