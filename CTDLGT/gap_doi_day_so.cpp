#include <bits/stdc++.h>
using namespace std ;

int modulo = 1e9 + 7 ;

long long find_k(long long n, long long k, long long pos){
	if(k == pos) return n ;
	if(k > pos) return find_k(n - 1, k - pos, pos/2) ;
	return find_k(n - 1, k, pos/2) ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long n, k, pos = 1 ;
		cin >> n >> k ; 
		int tmp = n ;
		while(tmp > 1){
			pos *= 2 ;
			tmp-- ;
		}
		cout << pos << endl ;
		cout << find_k(n,k,pos) << endl ;
	}
}

