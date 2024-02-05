#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num ; 
	cin >> num ;
	int arr[num] ;
	map <int, int> mp ;
	for(int i = 0 ; i < num ; i++){
		cin >> arr[i] ;
		mp[arr[i]]++ ;
	}
	for(int i = 0 ; i < num ; i++){
		if(mp[arr[i]] > 0){
			cout << arr[i] << " " ;
			mp[arr[i]] = 0 ;
		}
	}
}
