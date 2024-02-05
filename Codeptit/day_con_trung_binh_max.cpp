#include <bits/stdc++.h>
using namespace std ;


int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k ;
		cin >> n >> k ;
		long long arr[1000] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		long long max = -10e9, x = 0 ;
		for(int i = 0 ; i < n ; i++) {
			long long sum = 0 ; 
			if(i + k - 1 < n)for(int j = i ; j < i + k ; j++) sum += arr[j] ;
			if(sum > max){
				max = sum ;
				x = i ;
			}
		}
		for(int i = x ; i < x + k ; i++) cout << arr[i] << " " ;
		cout << endl ;
	}
}
