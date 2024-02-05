#include <bits/stdc++.h>
using namespace std ;

int dx[8] = {-1, -1, -1, 0, 0 , 1, 1 ,1} ;
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1 } ;

int m, n, arr[100][100] ;
int dem = 0 ;

void input(){
	cin >> m >> n ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n; j++) cin >> arr[i][j] ;
	}
}
void Try(int i, int j, int x){
	dem++ ;
	arr[i][j] = 1000 ;
	for(int k = 0 ; k < 8 ; k++){
		int n_i = i + dx[k], n_j = j + dy[k] ;
		if(n_i >= 0 && n_i < m && n_j >= 0 && n_j < n && arr[n_i][n_j] == x){
			Try(n_i,n_j,x) ;
		}
	}
	
}

int main(){
	input() ;
	map <int, vector<int>> mp ;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(arr[i][j] != 1000){
				int tmp = arr[i][j] ;
				dem = 0 ;
				Try(i,j, arr[i][j]) ;
				mp[tmp].push_back(dem) ;
			}
		}
	}
	for(auto x : mp){
		cout << x.first << " : " ;
		sort(x.second.begin() ,x.second.end()) ;
		for(auto i : x.second) cout << i << " " ;
		cout << endl ;
	}
}
