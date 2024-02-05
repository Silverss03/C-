#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, i, res = 0, j ;
		cin >> num ;
		int arr[num] ;
		for(i = 0 ; i < num ; i++){
			cin >> arr[i] ;
		}
		for(i = 0 ; i < num ; i++){
			for(j = 0 ; j < num; j++){
				if(arr[j] == arr[i] && j != i){
					res++ ; 
					break ;
				}
			}
		}
		cout << res << endl ;
	}
}
