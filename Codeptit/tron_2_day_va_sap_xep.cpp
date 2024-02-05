#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m, n ; 
		cin >> m >> n ;
		vector <int> res ;	
		for(int i = 0 ; i < m ; i++){
			int num ;
			cin >> num ; 
			res.push_back(num) ;
		}
		for(int i = 0 ; i < n ; i++){
			int num ;
			cin >> num ; 
			res.push_back(num) ;
		}
		sort(res.begin(), res.end()) ;
		for(int i = 0 ; i < res.size() ; i++) cout << res[i] << " " ;
		cout << endl ; 
	}

}
