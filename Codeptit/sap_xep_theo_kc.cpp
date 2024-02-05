#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long n , x, count[10000] = {0} ;
		cin >> n >> x ;
		long long arr[n], res[n] ;
		for(long long i = 0 ; i < n ;i++){
			cin >> arr[i] ;
			res[i] = abs(arr[i] - x) ;
		}
		sort(res , res + n) ;
		for(long long i = 0 ; i < n ; i++){
			for(long long j = 0 ; j < n ; j++){
				if(abs(arr[j] - x) == res[i] && count[arr[j]] == 0){
					cout << arr[j] << " " ;
					count[arr[j]] = 1 ;
					break ;
				}
			}
		}
		cout << endl ;
	}
}
