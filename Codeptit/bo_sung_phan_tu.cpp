#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long n, min , res = 0 ;
		cin >> n ;
		long long *arr = new long long[n] ;
		for(long long i = 0 ; i < n ; i++){
			cin >> arr[i] ; 
		}
		sort(arr, arr + n) ;
		min = arr[0] ;
		for(long long i = 0 ; i < n ; i++){
			if(arr[i] == min) min++ ;
			else if(arr[i] != min && arr[i] != arr[i - 1]){
				res += (arr[i] - arr[i - 1] - 1) ;
				min = arr[i] ;
			}
		}
		cout << res << endl;
		delete[] arr ;
	}
}
