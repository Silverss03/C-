#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;
void init(int arr[], int k){
	for(int i = 1 ; i <= k ; i++) arr[i] = i ; 
}

void act(int arr[], int n, int k){
	int i = k ; 
	while(i >= 1 && arr[i] == n - k + i) i-- ;
	if(i == 0){
		final = 1 ;
		return ;
	}
	arr[i]++ ;
	for(int j = i + 1; j <= k ; j++) arr[j] = arr[j - 1] + 1 ;
}

int check(int arr[], int tmp[], int k){
	for(int i = 1 ; i <= k ; i++){
		if(arr[i] != tmp[i]) return 0 ;
	}
	return 1 ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		final = 0 ;
		int n, k, res = 1 ;
		cin >> n >> k ;
		int arr[k], tmp[k] ;
		for(int i = 1 ; i <= k; i++) cin >> tmp[i] ;
		init(arr, k) ;
		if(check(arr, tmp, k) == 1) cout << res << endl ;
		else{
			while(final == 0){
				res++ ;
				act(arr, n, k) ;
				if(check(arr,tmp, k) == 1){
					cout << res << endl ;
					final = 1 ;
				}
			}
		}
	}
}
