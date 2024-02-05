#include <bits/stdc++.h>
using namespace std;

long long INF = LLONG_MAX;
long long a[1000005];

int main()
{
	long long n, res = -INF, sum = 0;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] ;	
	}
	for(int i = 1 ; i <= n ; i++){
		sum += a[i] ;
		res = max(sum, res) ;
		if(sum < 0) sum = 0;
	}
	cout << res ;
}

