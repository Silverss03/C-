#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string n1, n2 ; 
		cin >> n1 >> n2 ; 
		int F[102][102] ; 
		memset(F, 0, sizeof(F)) ;
		int res = 0, l1 = n1.length() , l2 = n2.length() ;
		for(int i = 1 ; i <= n1.length() ; i++)
		{
			for(int j = 1 ; j <= n2.length() ; j++)
			{
				if(n1[i - 1] == n2[j - 1]) 
					F[i][j] = F[i - 1][j - 1] + 1 ;
				else 
					F[i][j] = max(F[i - 1][j], F[i][j - 1]) ;
				res = max(res, F[i][j]) ;
			}
		}
		cout << res << endl ;
	}
}

