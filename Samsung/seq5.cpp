#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k, res = 0 ;
	cin >> n >> k ;
	vector<long long> vt, maxL, maxR ;
	for(int i = 0 ; i < n ; i++){
		long long tmp ;
		cin >> tmp ;
		vt.push_back(tmp) ;
	}
	maxL[0] = vt[0] ;
	maxR[n - 1] = vt[n - 1] ;
	for(int i = 1 ; i < n ; i++){
		maxL= max(vt[i], maxL[i - 1]) ;
	}
	for(int i = n - 2 ; i >= 0 ; i--){
		maxR = max(vt[i], maxR[i + 1]) ;
	}
	while(k--){
		
	}
}

