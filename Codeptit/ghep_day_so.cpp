#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int k , n ;
		cin >> k >> n ; 
		vector <int> arr ;
		for(int i = 0 ; i < k ; i++){
			for(int j = 0 ; j < n ; j++){
				int num ; 
				cin >> num ; 
				arr.push_back(num) ;
			}
		}
		sort(arr.begin(), arr.end()) ;
		for(int i = 0 ; i < arr.size() ; i++) cout << arr[i] << " " ;
		cout << endl ;
	}
}
