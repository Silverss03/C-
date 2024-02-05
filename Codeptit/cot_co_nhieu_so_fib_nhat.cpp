#include <bits/stdc++.h>
using namespace std ;

set <long long> fib ;
void init(){
	long long arr[93] ;
	arr[0] = 0 ;
	arr[1] = 1 ;
	fib.insert(1) ;
	for(int i = 2 ; i < 93 ; i++){
		arr[i] = arr[i - 1] + arr[i - 2] ;
		fib.insert(arr[i]) ;
	}
}

int main(){
	init() ;
	int tests ;
	cin >> tests ;
	while(tests--){
		long long m, n, max = -1, max_sum = -1, res_c ;
		cin >> m >> n ;
		int arr[m][n] ;
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++) cin >> arr[i][j] ;
		}
		for(int i = 0 ; i < n ; i++){
			long long c = 0, sum = 0 ;
			for(int j = 0 ; j < m ; j++){
				if(fib.find(arr[j][i]) != fib.end()){
					c++ ;
					sum += arr[j][i] ;
				}
			}
			cout << c << " " << sum << endl ;
			if(c > max){
				res_c = i ;
				max = c ;
			}
			else if(c == max){
				if(sum > max_sum){
					max_sum = sum ;
					res_c = i ;
				}
			}
		}
		cout << res_c + 1 << endl ;
		for(int i = 0 ; i < m ; i++) cout << arr[i][res_c] << " " ;
		cout << endl ;
		
	}
}
