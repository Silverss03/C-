#include <bits/stdc++.h>
using namespace std ;

long long F[100] ;
int BinWord(long long n, long long k){
	if(n == 1) return 0 ;
	if(n == 2) return 1 ;
	if(k <= F[n - 2]) return BinWord(n - 2, k) ;
	return BinWord(n - 1, k - F[n -2]) ;
}

int main(){
	int tests ;
	long long n, k ;
	F[1] = 1; F[2] = 1 ;
	for(int i = 3; i <= 92 ; i++) F[i] = F[i - 1] + F[i - 2] ;
	cin >> tests ;
	while(tests--){
		cin >> n >> k ;
		cout << BinWord(n,k) << endl ;
	}
}
