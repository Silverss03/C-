#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;

void init(int arr[], int n){
	for(int i = 0 ; i < n ; i++) arr[i] = i + 1;
}

void act(int arr[], int n){
	int l = n - 2, r = n - 1 ;
	while(l >= 0 && arr[l] > arr[l + 1]) l-- ;
	if(l < 0){
		final = 1 ;
		return ;
	}
	else{
		while(r >= 0 && arr[r] < arr[l]) r-- ;
		swap(arr[r], arr[l]) ;
		reverse(arr + l + 1, arr + n) ;
	}
}

int check(int arr[], int tmp[], int num){
	for(int i = 0 ; i < num ; i++){
		if(arr[i] != tmp[i]){
			return 0 ;
		}
	}
	return 1 ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		final = 0 ;
		int num, res = 1 ;
		cin >> num ;
		int arr[num], tmp[num] ;
		init(arr, num) ;
		for(int i = 0 ; i < num ; i++) cin >> tmp[i] ;
		if(check(arr,tmp,num) == 1) cout << res << endl ;
		else{
			while(final == 0){
				act(arr, num) ; 
				res++ ;
				if(check(arr,tmp,num) == 1){
					cout << res << endl ;
					final = 1;
				}
			}
		}
	}
}
