#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = 0, c = 0 ;
		cin >> num ;
		int arr[num][num], tmp[num] ;
		for(int i = 0 ; i < num ; i++){
			for(int j = 0 ; j < num ; j++) cin >> arr[i][j] ;
		}
		for(int i = 0 ; i < num ; i++){
			int count = 0, m = 1 ;
			for(int l = 0 ; l < c ; l++){
				if(arr[0][i] == tmp[l]){
					m = 0 ;
					break ;	
				}
			}
			if(m == 1){
				for(int j = 1 ; j < num ; j++){
					for(int k = 0 ; k < num ; k++){
						if(arr[0][i] == arr[j][k]){
							count++ ;
							break ;
						}
					}
				}
				if(count == num - 1){
					res++ ;
					tmp[c++] = arr[0][i] ;
				}
			}
		}
		cout << res << endl ;
	}
}
