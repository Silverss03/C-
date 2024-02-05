#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long num, sum = 0, max = -1 ; 
		cin >> num ;
		vector<int> vec(num) ;
		for(int i = 0 ; i < num ; i++) cin >> vec[i] ;
		for(int i = 0 ; i < num ; i++){
			sum += vec[i] ;
			if(sum < 0) sum = 0 ;
			if(max < sum) max = sum ;
		}
		cout << max << endl;
	}
}
