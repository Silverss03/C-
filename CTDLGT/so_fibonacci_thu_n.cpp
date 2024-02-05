#include <iostream>
using namespace std ;

int modulo = 1e9 + 7 ;
long long prototype[2][2], n, arr[2][2] ;

void mul(long long A[2][2], long long B[2][2]){
	long long tmp[2][2] ;
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			tmp[i][j] = 0 ;
			for(int k = 0 ; k < 2 ; k++){
				tmp[i][j] += A[i][k] * B[k][j] ;
				tmp[i][j] %= modulo ;
			}
		}
	}
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++) A[i][j] = tmp[i][j];
	}
}

void power(long long arr[2][2], long long n){
	if(n <= 1) return ;
	power(arr, n/2) ;
	mul(arr, arr) ;
	if(n % 2 == 1){
		mul(arr, prototype) ;
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> n ;
		arr[0][0] = arr[1][0] = arr[0][1] = 1 ;
		arr[1][1] = 0 ; 
		prototype[0][0] = prototype[0][1] = prototype[1][0] = 1 ;
		prototype[1][1] = 0 ;
		if(n == 0) cout << 0 << endl ;
		else
		{
			power(arr, n - 1) ;
			cout << arr[0][0] << endl ;	
		}
	}
}
