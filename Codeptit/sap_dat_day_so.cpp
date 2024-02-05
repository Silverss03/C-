#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		long long *arr = new long long[num] ;
		for(long long i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(long long i = 0 ; i < num ; i++){
			long long c = 0 ;
			for(long long j = 0 ; j < num ; j++) if(arr[j] == i){
				c = 1 ; 
				long long tmp = arr[j] ;
				arr[j] = arr[i] ;
				arr[i] = tmp ;
			}
			if(c == 0) cout << "-1 " ;
			else cout << arr[i] << " " ;
		}
		delete[] arr ;
		cout << endl ; 
	}
}
