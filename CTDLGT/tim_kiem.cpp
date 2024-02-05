#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, X ;
		cin >> n >> X ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ; 
		if(binary_search(arr, arr + n, X)) cout << 1 << endl ;
		else cout << -1 << endl ;
	}
}

