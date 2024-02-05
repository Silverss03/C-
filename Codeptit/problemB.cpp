#include <bits/stdc++.h>
using namespace std;

int main(){
	int num ;
	cin >> num ;
	int arr[num], arr2[num];
	for(int i = 0 ; i < num ; i++){
		cin >> arr[i] ;
		arr2[i] = arr[i] ;
	}
	sort(arr, arr + num) ;
	for(int i = 0 ; i < num ; i++ ){
		auto it = lower_bound(arr, arr + num, arr2[i]) ;
		if(it == arr) cout << "# " ;
		else{
			it-- ;
			cout << *it << " " ;
		}
	}
}
