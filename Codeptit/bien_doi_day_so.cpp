#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = 0 ;
		cin >> num ;
		int arr[num], l = 0 , r = num - 1 ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		while(l < r){
			if(arr[l] == arr[r]){
				l++ ;
				r-- ;
			}
			else if(arr[l] < arr[r]){
				l++ ;
				arr[l] += arr[l - 1] ;
				res++ ;
			}
			else{
				r-- ;
				arr[r] += arr[r + 1] ;
				res++ ;
			}
		}
		cout << res << endl ;
	}
}
