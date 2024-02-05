#include <bits/stdc++.h>
using namespace std ;

int check(vector<int> v, int  n, int x){
	int sum = 0 , len_min = n + 1, start = 0 , end = 0 ;
	while(end < n){
		while(sum <= x && end < n) sum += v[end++] ;
		while(sum > x && start < n){
			if(end - start < len_min) len_min = end - start ;
			sum -= v[start++] ;
		}
	}
	return len_min ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k ;
		cin >> n >> k ;
		vector <int> v(n); 
		for(int i = 0 ; i < n ; i++) cin >> v[i] ;
		if(check(v, n , k) > n) cout << -1 << endl ;
		else cout << check(v,n,k) << endl ;
	}
}
