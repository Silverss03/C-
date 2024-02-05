#include <bits/stdc++.h>
using namespace std ;

long long n, arr[10], num[10], sum ;
vector<vector<int>> res ;

bool check(){
	int tmp = 0 ;
	for(int i = 0 ; i < n ; i++) if(arr[i]) tmp += num[i] ;
	if(sum == tmp) return true ;
	return false ;
}

void Try(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j ;
		if(i == n - 1){
			if(check()){
				vector<int> tmp ;
				for(int i = 0 ; i < n ; i++) if(arr[i]) tmp.push_back(num[i]) ;
				res.push_back(tmp) ;
			}
		}
		else Try(i + 1) ; 
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		res.clear() ;
		cin >> n >> sum ;
		for(int i = 0 ; i < n ; i++) cin >> num[i] ;
		sort(num, num + n) ;
		Try(0) ;
		if(res.size() == 0) cout << "-1\n" ;
		else{
			sort(res.begin(), res.end()) ;
			for(auto x : res){
				int len = x.size() ;
				cout << '[' ;
				for(int i = 0 ; i < len - 1 ; i++) cout << x[i] << " " ;
				cout << x[len - 1] << ']' << " " ;
			}	
			cout << endl ;	
		}
	}
}
