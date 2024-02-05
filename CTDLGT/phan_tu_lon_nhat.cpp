#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		int n , k ; 
		cin >> n >> k ; 
		int arr[n] ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n)  ;
		while(k > 0)
		{
			cout << arr[n - 1] << " " ; 
			k-- ;
			n-- ;
		}
		cout << endl ;
	}
}

