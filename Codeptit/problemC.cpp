#include <bits/stdc++.h>
using namespace std ;

int main(){
	int m, n ;
	cin >> m >> n ;
	int arr[1005][1005], F1[1005][1005], F2[1005][1005] ;
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1; j <= n ; j++){
			cin >> arr[i][j] ;
			F1[i][j] = F1[i][j - 1] + arr[i][j] ;
			F2[i][j] = F2[i - 1][j] + arr[i][j] ;
		}
	}
	int acts ;
	cin >> acts ;
	while(acts--){
		int type, a, b, c ;
		cin >> type >> a >> b >> c;
		if(type == 1) cout << F1[a][c] - F1[a][b - 1] << endl  ;
		else cout << F2[c][a] - F2[b - 1][a] << endl  ;
	}
}
