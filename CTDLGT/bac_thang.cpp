#include <iostream>
using namespace std;

int modulo = 1e9 + 7 ;
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, k ; 
		cin >> n >> k ; 
		int F[100002] = {0} ; 
		F[0] = 1 ;
		F[1] = 1;
		for(int i = 2 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= min(i, k) ; j++)
			{
				F[i] += F[i - j] ;
				F[i] %= modulo ; 
			}
		}
		cout << F[n] << endl ;
	}
}

