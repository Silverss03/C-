#include <iostream>
using namespace std;

int modulo = 10e9 + 7;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, k  ;
		cin >> n >> k ;
		long long F[1002][1002] ;
		for(long long i = 1 ; i <= n ; i++) F[i][1] = i ;
		for(long long i = 2 ; i <= n ; i++)
		{
			for(long long j = 2; j <= i ; j++)
			{
				if(n * k != 0 && n != k) F[i][j] = (F[i - 1][j - 1] + F[i - 1][j]) % modulo ;
				else if(n == k) F[i][j] = 1; 
			}
		}
		cout << F[n][k] << endl ;
	}
}

