#include <bits/stdc++.h>
using namespace std;

long long INF = LLONG_MAX;

int main()
{
	long long n, tmp, ans = -INF, minimum = 0, sum = 0  ;
	cin >> n ;
	vector<long long> vt ;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp ; 
		vt.push_back(tmp) ;		
	}
	for(int j = 0 ; j < n ; j++){
		sum += vt[j] ;
		if(sum - minimum > ans){
			ans = sum - minimum ;
		}	
		minimum = min(sum, minimum) ; 
	}
	cout << ans ;
}

