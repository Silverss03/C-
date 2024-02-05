#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num, excep ;
	cin >> num ;
	int arr[num] ;
	for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
	cin >> excep ;
	for(int i = 0 ; i < num ; i++){
		if(arr[i] != excep) cout << arr[i] << " " ;
	}
}
