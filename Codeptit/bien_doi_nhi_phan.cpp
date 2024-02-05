#include <bits/stdc++.h>
using namespace std; 

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int r, c, i, j;
		cin >> c >> r ;
		int arr[c][r], row[r], col[c], count = 0 ;
		for(i = 0 ; i < c ; i++){
			for(j = 0 ; j < r ; j++){
				cin >> arr[i][j] ;
				if(arr[i][j] == 1){
					row[i] = 1 ;
					col[j] = 1;
				}
			}
		}
		for(i = 0 ; i < c ; i++){
			for(j = 0 ; j < r ; j++){
				if(row[i] == 1 || col[j] == 1) cout << 1 << " " ;
				else cout << 0 << " " ;
			}
			cout << endl ;
		}
	}
}

