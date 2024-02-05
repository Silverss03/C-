#include <iostream>
using namespace std;

int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		int arr[100002], inc[100002], dec[100002], n, res = 0 ;
		cin >> n ; 
		
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		
		inc[0] = 1 ;
		for(int i = 1 ; i < n ; i++)
		{
			if(arr[i] > arr[i - 1]) inc[i] = inc[i - 1] + 1 ;
			else inc[i] = 1 ;
		}
		
		dec[n - 1] = 1 ;
		for(int i = n - 2 ; i >= 0 ; i--)
		{
			if(arr[i] > arr[i + 1]) dec[i] = dec[i + 1] + 1 ;
			else dec[i] = 1 ;
		}
		
		for(int i = 0 ; i < n ; i++)
		{
			res = max(res, inc[i] + dec[i] - 1) ;
		}
		cout << res << endl ;
	}
}

