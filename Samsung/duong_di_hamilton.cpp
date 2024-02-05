#include <bits/stdc++.h>
using namespace std;

int v, e, check[1002], res; 
vector<int> List[1002] ;

void Hamilton(int i, int tmp){
	if(tmp == v){
		res = 1 ;
	}
	check[i] = 1;
	for(auto x : List[i]){
		if(check[x] == 0){
			Hamilton(x, tmp + 1) ;
			check[x] = 0 ;
		}
	}
}
int main()
{
	int tests;
	cin >> tests ;
	while(tests--){
		cin >> v >> e ; 
		res = 0 ;
		memset(check, 0, sizeof(check)) ;
		for(int i = 1 ; i <= v ; i++){
			List[i].clear() ;
		}
		for(int i = 1 ; i <= e ; i++){
			int x, y ;
			cin >> x >> y ; 
			List[x].push_back(y);
			List[y].push_back(x);  
		}
		for(int i = 1 ; i <= v ; i++){
			Hamilton(i, 1) ;
			memset(check, 0, sizeof(check)) ;
		}
		cout << res << endl ;
	}	
}

