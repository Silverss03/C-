#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, max = 0, sum1 = 0, sum2 = 0  ;
		cin >> num ;
		int arr_1[num], arr_2[num], diff[2*num - 1] ;
		memset(diff, -1, sizeof(diff)) ;
		for(int i = 0 ; i < num ; i++) cin >> arr_1[i]; 
		for(int i = 0 ; i < num ; i++) cin >> arr_2[i] ;
		for(int i = 0 ; i < num ; i++){
			sum1 += arr_1[i] ;
			sum2 += arr_2[i] ;
			int curr = sum1 - sum2 ;
			int diffI = num + curr ;
			if(curr == 0) max = i + 1 ;
			else if(diff[diffI] == -1) diff[diffI] = i ;
			else{
				int len = i - diff[diffI] ;
				if(len > max) max = len ;
			}
		}
		cout << max << endl ;
	}
}
