#include <bits/stdc++.h>
using namespace std ;

int main(){
	long long n, tmp ; 
	cin >> n ;
	vector<long long> vt, inc, dec ;
	for(long long i = 0 ; i < n ; i++){
		cin >> tmp ; 
		vt.push_back(tmp) ;
	}
	for(long long i = 0 ; i < n ; i++){
		auto it = lower_bound(inc.begin(), inc.end() , vt[i]) ; 
		if(it == inc.end()){
			inc.push_back(vt[i]) ;
		}
		else{
			*it = vt[i] ;
		}
		it = lower_bound(dec.begin(), dec.end() , -vt[i]) ; 
		if(it == dec.end()){
			dec.push_back(-vt[i]) ;
		}
		else{
			*it = -vt[i] ;
		}
	}
	cout << n - max(dec.size(), inc.size()) ;
}
