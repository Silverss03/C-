#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, cmp, l = 0, res = -1; 
		cin >> num >> cmp ;
		int r = num ;
		int *arr = new int[num] ;
		for(int i = 1 ; i <= num ;i++) cin >> arr[i] ;
		while(l < r){
			int m = round((double)((l+r)/2)) ;
			if(arr[m] == cmp){
				res = 1 ;
				l = r ;
			}
			else if(arr[m] > cmp)	r = m - 1 ;
			else l = m + 1 ;
		}
		cout << res << endl ;
		delete[] arr ;
	}
}
