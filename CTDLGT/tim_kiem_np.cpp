#include <iostream>
#include <vector>
using namespace std ;

int n, k ;
int bin_search(vector<int> arr, int l, int r, int m){
	if(r >= l){
		if(arr[m] == k) return m + 1 ;
		else if(arr[m] < k){
			l = m + 1 ;
			m = (r + l)/ 2 ;
			return bin_search(arr, l, r, m) ;
		}
		else{
			r = m - 1 ;
			m = (r + l)/ 2 ; 
			return bin_search(arr, l, r, m) ;
		}
	}	
	return -1 ;
} 

int main(){
	int tests;
	cin >> tests ;
	while(tests--){
		cin >> n >> k ;
		vector<int> arr(n) ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		int pos = bin_search(arr, 0, n - 1, (n - 1)/2) ;
		if(pos != -1) cout << pos << endl ;
		else cout << "NO\n" ;
	}
}
