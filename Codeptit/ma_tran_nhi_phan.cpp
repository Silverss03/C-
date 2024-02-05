#include <bits/stdc++.h>
using namespace std ;

int main(){
	int r, i, j, res = 0 ;
	cin >> r ;
	int arr[r][3] ;
	for(i = 0 ; i < r ;i++){
		int c_1 = 0, c_0 = 0 ; 
		for(j = 0; j < 3 ; j++){
			cin >> arr[i][j] ;
			if(arr[i][j] == 1) c_1++ ;
			else c_0++ ;	
		}
		if(c_1 > c_0) res++ ;
	}
	cout << res ; 
}
