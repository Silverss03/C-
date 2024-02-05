#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;
void init(int arr[], int k){
	for(int i = 1 ; i <= k ; i++) arr[i] = i ; 
}

void act(int arr[], int n, int k){

}


int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		final = 0 ;
		int n, k ;
		cin >> n >> k ;
		int arr[k];
		for(int i = 1 ; i <= k; i++) cin >> arr[i] ;
		int i = k ; 
		while(i >= 1 && arr[i] == n - k + i) i-- ;
		if(i == 0){
			for(int i = k ; i <= n ; i++){
				cout << i << " " ;
			}
			cout << endl ;
		}
		else{
			for(int j = i ; j <= k ; j++) arr[j] = arr[j - 1] + 1 ;
			for(int i = 1 ; i <= k ; i++){
				cout << arr[i] << " " ;
			}
			cout << endl ;
		}
	}
}
