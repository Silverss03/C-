#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int v, e, check[1002], start, finish, path[1002];
vector<int> List[1002] ;

void BFS(int i){
	check[i] = 1 ; 
	queue<int> qu ;
	qu.push(i) ;
	while(!qu.empty()){
		int tmp = qu.front() ;
		qu.pop() ;
		for(int j = 0 ; j < List[tmp].size() ; j++){
			if(check[List[tmp][j]] == 0){
				qu.push(List[tmp][j]) ;
				check[List[tmp][j]] = 1;
				path[List[tmp][j]] = tmp ;
			}
		}
	} 
}

void out(){
	if(path[finish] == 0){
		cout << -1 << endl ;
	}
	else{
		vector<int> vt ;
		while(finish != start){
			vt.push_back(finish) ;
			finish = path[finish] ; 
		}
		vt.push_back(start) ; 
		reverse(vt.begin() , vt.end() ) ;
		for(auto x : vt){
			cout << x << " " ;
		} 
		cout << endl ;
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		memset(check, 0, sizeof(check)) ;
		memset(path, 0, sizeof(path)) ;	
		cin >> v >> e >> start >> finish; 
		
		for(int i = 1 ; i <= v ; i++)
		{
			List[i].clear() ;	
		}	
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
			List[y].push_back(x) ;
		}
		
		BFS(start) ;
		out() ;
	}
}

