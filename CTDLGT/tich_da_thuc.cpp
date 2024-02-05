#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int p[102], q[102], res[102], m, n ;
		memset(res, 0, sizeof(res)) ;
		cin >> m >> n ;
		for(int i = 0 ; i < m ; i++) cin >> p[i] ; 
		for(int j = 0 ; j < n ; j++) cin >> q[j] ;
		for(int i = 0 ; i < m ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				res[i + j] += (p[i] * q[j]) ;
			}
		}
		for(int i = 0 ; i < m + n - 1 ; i++)
		{
			cout << res[i] << " " ;
		}
		cout << endl ;
	}
}

