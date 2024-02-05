#include <bits/stdc++.h>
using namespace std ;

int check(int arr[], int l ,int r){
	int pos = -1, increase = 0 , decrease = 0, token = l ;
	while(arr[token] <= arr[token + 1] && token < r){
		token++ ;
		if(token == r ) increase = 1 ; 
	}
	token = l ;
	while(arr[token] > arr[token + 1] && token < r){
		token++ ;
		if(token == r ) decrease = 1 ; 
	}
	token = l ;
	if(increase == 0 && decrease == 0){
		while(arr[l] <= arr[l + 1] && l < r ){
			l++ ;
			
		}
		while(arr[l] > arr[l + 1] && l < r){
			l++ ;
		}
	}
	if(increase == 1 || decrease == 1 || l == r) return 1 ;
	return 0 ;
}
int main(){
	int tests; 
	cin >> tests ;
	while(tests--){
		int num, l, r ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		cin >> l >> r ;
		if(check(arr, l , r) == 1) cout << "Yes" << endl ;
		else cout << "No" << endl ;		
	}
}
