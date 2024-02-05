#include <bits/stdc++.h>
using namespace std ;
void final(int arr[], int n, int k){
	int i ;
	while(1){
		for(int i = 1 ; i <= k ; i++) cout << arr[i] << " " ;
		cout << endl ;
		i = k ;
		while(i > 0 && arr[i] >= n - k + i) i-- ;
		if(i == 0) return ;
		arr[i] += 1; 
		for(int j = i + 1 ; j <= k ; j++) arr[j] = arr[i] + j - i ; 
	}
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k ;
		cin >> n >>  k ;
		int arr[n] ; 
		for(int i = 1 ; i <= k ; i++){
			arr[i] = i ;
		}
		final(arr,n,k) ;	
	}
}
