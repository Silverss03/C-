#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, i ;
		cin >> num ;
		int arr[num] ;
		for(i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(i = 0 ; i < num ; i++){
			if(arr[i] > arr[i + 1]){
				cout << arr[i] << endl ;
				break ; 
			}
		}
	}
}
