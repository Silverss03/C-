#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, res = 0 ; 
		cin >> n ; 
		int arr[n] ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ;
		int l = arr[0], r = arr[n - 1] ; 
		while(l <= r)
		{
			if(binary_search(arr, arr + n, l)) l++ ;
			else
			{
				res++ ; 
				l++ ;
			}
		}
		cout << res << endl;
	}
}

