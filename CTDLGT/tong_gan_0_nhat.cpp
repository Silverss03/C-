#include <iostream>
using namespace std ;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, sum = 10e8 ; 
		cin >> n ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = i + 1 ; j < n ; j++)
			{
				int tmp = arr[i] + arr[j] ;
				if(abs(tmp) < abs(sum)) sum = tmp ;
			}
		}
		cout << sum << endl ;
	}
}
