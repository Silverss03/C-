#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <queue>
using namespace std;

int v, e, start, check[10002] ;
vector<int> List[10002] ;
vector<pair<int,int>> ans; 

void BFS(int i){
	check[i] = 1 ; 
	queue<int> qu ;
	qu.push(i) ;
	while(!qu.empty()){
		int tmp = qu.front() ;
		qu.pop() ;
		for(int j = 0 ; j < List[tmp].size(); j++){
			if(check[List[tmp][j]] == 0){
				qu.push(List[tmp][j]) ;
				check[List[tmp][j]] = 1 ;
				ans.push_back({tmp, List[tmp][j]}) ; 
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
		ans.clear() ;
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
		if(ans.size() < v - 1){
			cout << "-1\n" ;
		}
		else{
			for(auto x : ans)
			{
				cout << x.first << " " << x.second << endl ;
			}
		}
	}
}
