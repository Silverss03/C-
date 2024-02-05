#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;
void init(int arr[], int n){
	for(int i = 1 ; i <= n ; i++) arr[i] = 0 ;
}

void act(int arr[], int n){
	int i = n ; 
	while(i >= 1 && arr[i] == 1) i-- ;
	if(i == 0){
		final = 1 ;
		return ;
	}
	arr[i] = 1 ;
	for(int j = i + 1 ; j <= n ; j++) arr[j] = 0 ;
}

int check(int arr[], int n, int k){
	int res = 0 ;
	for(int i = 1 ; i <= n ; i++){
		if(arr[i] == 1) res++ ;
	}
	if(res == k) return 1 ;
	return 0 ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		final = 0 ;
		int n, k ;
		cin >> n >> k;
		int *arr = new int[n];
		init(arr, n) ;
		while(final == 0){
			if(check(arr,n,k) == 1){
				for(int i = 1 ; i <= n ; i++) cout << arr[i] ;
				cout << endl ;
			}
			act(arr, n) ;
		}		
		delete[] arr;
	}
}
