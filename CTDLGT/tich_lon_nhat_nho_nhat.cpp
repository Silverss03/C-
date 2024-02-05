#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, m ; 
		cin >> n >> m ;
		long long A[n], B[m] ;
		for(int i = 0 ; i < n ; i++) cin >> A[i] ;
		for(int j = 0 ; j < n ; j++) cin >> B[j] ;
		sort(A, A + n) ;
		sort(B, B + m) ; 
		long long res = A[n - 1] * B[0] ;
		cout << res << endl ;
	}
}

