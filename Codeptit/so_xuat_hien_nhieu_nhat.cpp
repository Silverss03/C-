#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		map<int, int> m ;
		int num, max = -1 ;
		cin >> num ;
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			m[tmp]++ ;
			if(m[tmp] > max) max = m[tmp] ;
		}
		for(auto x : m){
			if(x.second == max){
				cout << x.first << " " << x.second << endl ;
				break ;
			}
		}
	}
}
