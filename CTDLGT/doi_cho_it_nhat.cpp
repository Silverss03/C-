#include <iostream>
#include <algorithm>

using namespace std ;

int find(int arr[], int tar, int n){
	for(int i = 0 ; i < n ; i++) if(arr[i] == tar) return i ; //tim vi tri cua tar trong arr
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, res = 0 ; 
		cin >> n ; 
		int arr1[n], arr2[n] ; // tao 2 mang : 1 mang ban dau va 1 mang da sap xep
		for(int i = 0 ; i < n ; i++){
			cin >> arr1[i] ;
			arr2[i] = arr1[i] ;
		}
		sort(arr2, arr2 + n) ;
		for(int i = 0 ; i < n ; i++){ // sap xep lai mang dau tien
			if(arr1[i] != arr2[i]){  // tim thay phan tu bi sai vi tri
				res++ ;
				int pos = find(arr2, arr1[i], n) ; // tim vi tri dung cua phan tu bi sai vi tri
				swap(arr1[i], arr1[pos]) ; // doi cho 2 phan tu
			}
		}
		cout << res << endl;
	}
}

