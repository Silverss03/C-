#include <bits/stdc++.h>
using namespace std;

long long INF = LLONG_MAX;
long long a[1000005], F[1000005];

int main()
{
	long long n, res = -INF;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] ;	
	}
	F[0] = a[0] ;
	for(int i = 1 ; i <= n ; i++){
		F[i] = max(F[i - 1] + a[i], a[i]) ;
		res = max(res, F[i]) ;
	}
	cout << res ;
}

