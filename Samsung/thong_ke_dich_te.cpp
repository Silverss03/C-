#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1} ;
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1} ;

int main()
{
	int m, n, res = 0 ;
	cin >> m >> n ;
	map<pair<int,int>, int> mp ;
	int arr[102][102] ;
	memset(arr, 0 , sizeof(arr)) ;
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> arr[i][j] ;
			if(arr[i][j] >= 0){
				pair<int,int> tmp = {i,j} ;
				mp[tmp] = 1 ;
			}
		}
	}
	
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(arr[i][j] == -1){
				for(int k = 0 ; k < 8 ; k++){
					if(arr[i + dx[k]][j + dy[k]] > 0 && mp[{i + dx[k], j + dy[k]}] == 1){
						res += arr[i + dx[k]][j + dy[k]] ;
						mp[{i + dx[k], j + dy[k]}] = 0 ;
					}
				}
			}
		}
	}
	
	cout << res ;
	
}

