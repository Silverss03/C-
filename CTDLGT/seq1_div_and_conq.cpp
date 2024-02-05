#include <bits/stdc++.h>
using namespace std;

long long INF = LLONG_MAX;
long long a[1000005], b[1000005] ;

long long cal(int left, int right){
	if(left == right) return a[left] ;
	if(left > right) return -INF ;
	int mid = (left + right)/2 ;
	long long res1 = cal(left, mid) ; 
	long long res2 = cal(mid + 1,right) ;
	long long minb = INF ;
	for(int i = left; i <= mid ; i++){
		minb = min(minb, b[i]) ;
	}
	long long maxb = -INF ;
	for(int i = mid + 1 ; i <= right; i++){
		maxb = max(maxb, b[i]) ;
	}
	return max(max(res1,res2), maxb - minb) ;
}

int main()
{
	long long n;
	cin >> n ;
	b[0] = 0 ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] ;	
		b[i] += b[i - 1] + a[i];
	}
	
	cout << cal(1, n) ;
}

