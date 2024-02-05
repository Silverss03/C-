#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int arr[num], arr_2[num] ;
		for(int i = 0 ; i < num ; i++){
			cin >> arr[i] ;
		}
		vector <int> vt(arr, arr + num) ;
		sort(vt.begin(), vt.end()) ;
		for(int i = 0 ; i < num ; i++){
			auto it = upper_bound(vt.begin(), vt.end(), arr[i]) ;
			if(it == vt.end()) cout << '_' << " " ;
			else cout << (*it) << " ";
		}
		cout << endl ;
	}
}
