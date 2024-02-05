#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ; 
	cin >> tests ;
	while(tests--){
		int m ,n, res = 1 ;
		cin >> m >> n ;
		int arr[m]; 
		map <int,int> mp ;
		for(int i = 0 ; i < m ; i++)cin >> arr[i] ;
		for(int i = 0 ; i < n ; i++){
			int tmp ;
			cin >> tmp ;
			mp[tmp - 1 ] = 1 ;
		}
		for(int i = 0; i < m ; i++){
			if(mp[i] == 0) continue ;
			int index = i ;
			while(index < m && mp[index]){
				index++ ;
			}
			sort(arr + i, arr + index + 1 ) ;
			i = index ;
		}
		for(int i = 0 ; i < m ; i++){
			if(i > 0 && arr[i] < arr[i - 1]) res = 0;
		}
		if(res == 0) cout << "NO\n" ;
		else cout << "YES\n" ;
	}
} 
