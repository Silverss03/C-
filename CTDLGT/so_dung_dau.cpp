#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, max = -1 ;
		cin >> num ; 
		vector<int> vec(num), res ;
		for(int i = 0 ; i < num ; i++) cin >> vec[i] ;
		for(int i = num - 1 ; i >= 0 ; i--){
			if(vec[i] > max){
				max = vec[i] ;
				res.push_back(vec[i]) ;
			}
		}
		int len = res.size() ;
		for(int i = len - 1 ; i >= 0 ; i--) cout << res[i] << " " ;
		cout << endl ;
	}
}
