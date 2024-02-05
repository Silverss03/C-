#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		long long *arr = new long long[num] ;
		for(long long i = 0 ; i < num ; i++){
			cin >> arr[i] ;
		}
		sort(arr, arr + num) ;
		for(int i = 0 ; i < num ; i++){
			int res = - 1 ;
			for(int j = 0 ; j < num ; j++) if(arr[j] == i) res = arr[j] ;
			cout << res << " " ;
		}
		cout << endl ;
		delete[] arr ;
	}
}
