#include <bits/stdc++.h>
using namespace std;

int main(){
	int num ;
	cin >> num ;
	int arr[105][105], res[105][105] ;
	for(int i = 1 ; i <= num ; i++){
		for(int j = 1 ; j <= num ; j++) cin >> arr[i][j] ; 
	}
	for(int i = 1 ; i <= num ; i++){
		res[i][1] = arr[i][1] ;
		res[0][i] = res[num + 1][i] = -1e9 ;
	}
	for(int i = 2 ; i <= num ; i++){
		for(int j = 1 ; j <= num ; j++){
			res[j][i] = max({res[j][i - 1], res[j + 1][i - 1], res[j - 1][i - 1]}) + arr[j][i] ;
		}
	}
	int ans = -1e9 ;
	for(int i = 1; i <= num ; i++) if(res[i][num] > ans) ans = res[i][num] ;
	cout << ans << endl ;
}
