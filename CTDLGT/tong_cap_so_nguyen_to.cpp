#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
using namespace std;

int m = 10e6 ;
vector<bool> prime(m + 1) ;
void eratos()
{
	fill(prime.begin(), prime.end(), true) ;
	prime[1] = false ;
	prime[0] = false ;
	for(int i = 2 ; i <= sqrt(m) ; i++)
	{
		if(prime[i] == true)
		{
			for(int j = 2 * i ; j <= m ; j += i) prime[j] = false ;
		}
	}
}
int main()
{
	int tests ; 
	cin >> tests ;
	eratos() ;
	while(tests--)
	{
		int n, ans = 0 ; 
		cin >> n ;
		for(int i = 2 ; i <= n ; i++)
		{
			if(prime[i] && prime[n - i])
			{
				ans = 1 ;
				cout << i << " " << n - i << endl ; 
				break ;
			}
		}
		if(ans == 0) cout << -1 << endl ;
	}
}
