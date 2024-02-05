#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ; 
	while(tests--)
	{
		int n ;
		cin >> n ; 
		int arr[n] ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ; 
		sort(arr, arr + n) ;
		if(n % 2 == 0) cout << arr[n/2 - 1] << endl ;
		else cout << arr[n/2] << endl ;
	}
}

