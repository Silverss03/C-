#include <iostream>
using namespace std ;

int modulo = 1e9 + 7 ;
long long prototype[10][10], n, k, res = 0 ;

void mul(long long A[10][10], long long B[10][10]){
	long long tmp[10][10] ;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			tmp[i][j] = 0 ;
			for(int k = 0 ; k < n ; k++){
				tmp[i][j] += A[i][k] * B[k][j] ;
				tmp[i][j] %= modulo ;
			}
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++) A[i][j] = tmp[i][j];
	}
}

void power(long long arr[10][10], int k){
	if(k == 1) return ;
	power(arr, k/2) ;
	mul(arr, arr) ;
	if(k % 2 == 1){
		mul(arr, prototype) ;
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		res = 0 ;
		cin >> n >> k ;
		long long arr[10][10] ;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cin >> arr[i][j] ;
				prototype[i][j] = arr[i][j] ;
			}
		}
		power(arr, k) ;
		for(int i = 0 ; i < n ; i++) res += (arr[i][n - 1] % modulo) ;
		cout << res << endl ;
	}
}
