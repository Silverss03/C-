#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int N, i, j ;
		cin >> N ;
		int arr[N][N] ;
		for(i = 0 ; i < N; i++){
			for(j = 0 ; j < N ; j++) cin >>  arr[i][j] ;
		}
		for(i = 0 ; i < N ; i++){
			for(j = 0 ; j < N ; j++){
				if(i == 0 || i == N - 1 || j == 0 || j == N - 1 ) cout << arr[i][j] << " " ;
				else cout << "  "  ;
			}
			cout << endl ;
		}
	}
}
