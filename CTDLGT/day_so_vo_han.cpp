#include <bits/stdc++.h>
using namespace std ;

long long n, res[2][2], proto[2][2] ;

int modulo = 1e9 + 7;
void multiply(long long A[2][2], long long B[2][2]){
	long long tmp[2][2] ;
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			tmp[i][j] = 0 ;
			for(int k = 0 ; k < 2 ; k++){
				tmp[i][j] += (A[i][k] * B[k][j] ) ;
				tmp[i][j] %= modulo ;
			}		
		}
	}
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 2 ; j++) A[i][j] = tmp[i][j] ;
	}
}

void power(long long arr[2][2], int n){
	if(n == 1) return ;
	power(arr, n/2) ;
	multiply(arr, arr) ;
	if(n % 2 == 1) multiply(arr, proto) ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> n ;
		res[0][0] = res[0][1] = res[1][0] = 1 ;
		res[1][1] = 0 ; 
		proto[0][0] = proto[0][1] = proto[1][0] = 1 ;
		proto[1][1] = 0 ;
		if(n == 0) cout << 0 << endl ;
		else{
			power(res,n - 1) ;
			cout << res[0][0] << endl ;
		}	
	}
}
