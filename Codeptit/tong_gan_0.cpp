#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		long long min = 10e13 , res ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < num ; i++){
			for(int j = i + 1; j < num ; j++){
				long long tmp = abs(arr[j] + arr[i]) ;
				if(tmp < min){
					min = tmp ; 
					res = arr[j] + arr[i]  ;
				}
			}
		}
		cout << res << endl ;
	}
}
