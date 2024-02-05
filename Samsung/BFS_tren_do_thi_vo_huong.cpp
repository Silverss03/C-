#include <bits/stdc++.h>
using namespace std;

vector<int> List[1002] ;
int v, e, start , check[1002] ;

void BFS(int i){
	check[i] = 1 ; 
	queue<int> qu ;
	qu.push(i) ;
	while(!qu.empty()){
		int tmp = qu.front() ;
		cout << tmp << " " ;
		qu.pop() ;
		for(auto x : List[tmp]){
			if(check[x] == 0){
				qu.push(x) ;
				check[x] = 1 ;
			}
		}
	}	
}

int main(){
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
		BFS(start) ;
		cout << endl ;
	}
}

