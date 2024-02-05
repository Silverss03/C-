#include <bits/stdc++.h>
using namespace std;

vector<int> List[1002] ;
int v, e, start, check[1002];

void DFS(int i){
	cout << i << " " ; 
	check[i] = 1 ; 
	for(auto x : List[i]){
		if(check[x] == 0) DFS(x) ;
	}	
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> v >> e >> start ; 
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= v ; i++){
			List[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y ; 
			cin >> x >> y ; 
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		DFS(start) ;
	}
}

