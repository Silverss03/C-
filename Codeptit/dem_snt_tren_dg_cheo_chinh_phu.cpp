#include <bits/stdc++.h>
using namespace std ;

int check(int n){
	if(n < 2) return 0 ;
	if(n % 2 == 0 && n!= 2) return 0 ;
	for(int i = 3 ; i <= sqrt(n) ; i+= 2){
		if(n % i == 0) return 0 ;
	}
	return 1 ;
}

int main(){
	int num, res = 0 ;
	cin >> num ;
	set <int> st;
	for(int i = 0 ; i < num ; i++){
		for(int j = 0 ; j < num ; j++){
			int tmp ;
			cin >> tmp ;
			if((i == j || j == num - i - 1 ) && check(tmp) == 1) st.insert(tmp) ;
		}
	}
	for(auto x : st) res++ ;
	cout << res << endl ;
}
