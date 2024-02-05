#include <bits/stdc++.h>
using namespace std ;


int main(){
	int tests ; 
	cin >> tests ;
	while(tests--){
		int n, k ; 
		cin >> n >> k ; 
		int arr[k], i = k  ;
		for(int j = 1 ; j <= k ; j++) cin >> arr[j] ;
		while(i >= 1 && arr[i] == n - k + i) {
			i-- ;
		}
		if(i == 0){
			for(int j = 1 ; j <= k ; j++) cout << j << " " ; 
			cout << endl ;
		}
		else {
			arr[i] += 1 ;
			for(int j = i + 1 ; j <= k ; j++) arr[j] = arr[j - 1] + 1 ;
			for(int j = 1 ; j <= k ; j++) cout << arr[j] << " " ;
			cout << endl ;
		}
	}
}
