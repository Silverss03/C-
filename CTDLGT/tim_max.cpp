#include <iostream>
#include <algorithm>
using namespace std;

int modulo = 1e9 + 7 ;
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		long long n, res = 0 ; 
		cin >> n ;
		long long arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ;
		for(int i = 0 ; i < n ; i++) res += (arr[i] * i) ;
		cout << res % modulo << endl ;
	}
}

