#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = -1, min = 10e6 ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < num ; i++){
			if(arr[i] < min) min = arr[i] ;
			else{
				int tmp = arr[i] - min ; 
				if(tmp > res) res = tmp ;
			}
		}
		cout << res << endl ;
	}
}
