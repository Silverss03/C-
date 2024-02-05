#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m, n ;
		cin >> m >> n ;
		int arr[m][n], res[m][n] ;
		map <int, int> r, c ;
		for(int i = 0 ; i < m ;i++){
			for(int j = 0 ;j < n ; j++){
				cin >> arr[i][j] ;
			    if(arr[i][j] == 1){
			    	r[i] = 1 ;
			    	c[j] = 1 ;
				}
			}
		}
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(r[i] == 1 || c[j] == 1) res[i][j] = 1;
				else res[i][j] = arr[i][j] ;
			}
		}
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++) cout << res[i][j] << " " ;
			cout << endl ;
		}
	}
}
