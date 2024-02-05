#include <bits/stdc++.h>
using namespace std;

map <int, int> mp ;
void calc(int num){
	for(int i = 1 ; i <= sqrt(num) ; i++){
		if(num % i == 0){
			mp[i]++ ;
			if(i != sqrt(num))mp[num/i]++ ;
		}
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++){
			cin >> arr[i] ;
			calc(arr[i]) ;
		}
		for(auto x : mp){
			if(x.second >= 2) res = x.first ;
		}
		cout << res << endl ;
	}
}
