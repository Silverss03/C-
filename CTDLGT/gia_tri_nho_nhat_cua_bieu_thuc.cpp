#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a > b ;
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		long long n, sum1 = 0, sum2 = 0, res = 0 ; 
		cin >> n ; 
		long long A[n], B[n] ;		
		for(int i = 0 ; i < n ; i++)
		{
			cin >> A[i] ; 
			sum1 += A[i] ;
		}
		for(int i = 0 ; i < n ; i++)
		{
			cin >> B[i] ;
			sum2 += B[i] ;
		}
		if(sum1 > sum2)
		{
			sort(A, A + n) ;
			sort(B, B + n, cmp) ;
			for(int i = 0 ; i < n ; i++)
				res += (A[i] * B[i]) ;
		}
		else
		{
			sort(A, A + n, cmp) ;
			sort(B, B + n) ;
			for(int i = 0 ; i < n ; i++)
				res += (A[i] * B[i]) ;
		}
		cout << res << endl ;
	}
}

