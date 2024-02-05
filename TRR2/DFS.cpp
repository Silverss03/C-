#include <bits/stdc++.h>
using namespace std ;

int n, arr[100][100], check[100], s ;

void DFS(int i){
	cout << i << " " ;
	check[i] = 1 ;
	for(int j = 1 ; j <= n ; j++){
		if(check[j] == 0 && arr[i][j] == 1){
			DFS(j) ;
		}
	}
}

int main(){
	cin >> n >> s; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	DFS(s) ;
}
