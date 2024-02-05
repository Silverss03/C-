#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int arr[num] ;
		long long res ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		if(num == 1) cout << arr[0] << endl ;
		else{
			res = arr[0] * arr[1] ;
			cout << res << " " ;
			for(int i = 1 ; i < num -1 ; i++){
				res = arr[i - 1] * arr[i + 1]  ;
				cout << res << " ";
			}
			res = arr[num - 1] * arr[num - 2] ;
			cout << res << endl ;
		}
	}
}
