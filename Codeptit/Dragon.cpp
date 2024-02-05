#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n, s, res = 1 ;
	cin >> n >> s ;
	pair <int, int> p[n] ;
	for(int i = 0 ; i < n ; i++){
		cin >> p[i].first >> p[i].second ;
	}
	sort(p, p + n) ;
	for(int i = 0 ; i < n ; i++){
		if(s <= p[i].first){
			res = 0 ; 
			break ;
		}
		else s += p[i].second;
	}
	if(res == 1) cout << "YES" ;
}
