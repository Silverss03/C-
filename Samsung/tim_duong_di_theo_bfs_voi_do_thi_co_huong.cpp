#include <bits/stdc++.h>
using namespace std;

vector<int> Lists[1002] ;
int v, e, start, finish, check[1002], path[1002] ;

void BFS(int i){
	check[i] = 1 ;
	queue<int> qu ; 
	qu.push(i) ;
	while(!qu.empty()){
		int tmp = qu.front() ; 
		qu.pop() ;
		for(auto x : Lists[tmp]){
			if(check[x] == 0){
				check[x] = 1 ;
				qu.push(x) ; 
				path[x] = tmp ; 
			}
		}
	}	
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> v >> e >> start >> finish ;
		memset(check, 0, sizeof(check)) ;
		memset(path, -1, sizeof(path)) ;
		for(int i = 1 ; i <= v ; i++){
			Lists[i].clear() ; 
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y ;
			cin >> x >> y ; 
			Lists[x].push_back(y) ;
		}
		BFS(start) ; 
		if(path[finish] == -1){
			cout << -1 ;
		}
		else{
			vector<int> vt ;
			vt.push_back(finish) ; 
			while(path[finish] != start){
				vt.push_back(path[finish]) ;
				finish = path[finish] ; 
			}
			vt.push_back(start) ; 
			reverse(vt.begin(), vt.end()) ;
			for(auto x : vt){
				cout << x << " " ;
			}
		}
		cout << endl ;
	}
}

