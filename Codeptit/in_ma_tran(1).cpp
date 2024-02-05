#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ,i ,j  ; 
		cin >> num ;
		int arr[num][num] ;
		for(i = 0; i < num ; i++){
			for(j = 0 ; j < num ;j++) cin >> arr[i][j] ;
		}
		for(i = 0; i < num ; i++){
			if(i % 2 == 0) for(j = 0 ; j < num ; j++) cout << arr[i][j] << " " ;
			else for(j = num - 1 ; j >= 0 ; j--) cout << arr[i][j] << " " ;
		}
		cout << endl ;
	}
}
