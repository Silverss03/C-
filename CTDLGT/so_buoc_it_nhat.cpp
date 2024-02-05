#include <iostream>
using namespace std ;

int main()
{
	int tests ;
	cin >> tests ; 
	while(tests--)
	{
		int n, arr[1001], F[1001], res = 0 ;
		cin >> n ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < n ; i++)
		{
			F[i] = 1; 
			for(int j = 0 ; j < i ; j++)
			{
				if(arr[j] <= arr[i]) F[i] = max(F[i], F[j] + 1) ;
			}
			res = max(F[i], res) ;
		}
		cout << n - res << endl ;
	}
}
