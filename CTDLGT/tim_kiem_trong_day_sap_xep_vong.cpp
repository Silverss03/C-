#include <iostream>
using namespace std;

int bin_search(int arr[], int l, int r, int tar)
{
	if(r >= l)
	{
		int mid = l + (r - l) / 2 ;
		if(arr[mid] > tar)
		{
			return bin_search(arr, l, mid - 1, tar) ;
		}
		else if(arr[mid] < tar)
		{ 
			return bin_search(arr, mid + 1, r, tar) ;
		}
		else return mid ;
	}
	return -1 ;
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, X, m = -1, f = 0; 
		cin >> n >> X ; 
		int arr[n] ;
		for(int i = 0 ; i< n ; i++)
		{
			cin >> arr[i] ; 
			if(i > 0 && arr[i] < arr[i - 1] && f == 0)
			{
				m = i - 1;
				f = 1 ;
			}
		}
		if(m != -1)
		{
			if(arr[m] > X) cout << bin_search(arr, m + 1, n - 1, X) + 1 << endl ;
			else if (arr[m] < X) cout << bin_search(arr, 0, m - 1, X) + 1 << endl ;
			else cout << m + 1;
		}
		else cout << bin_search(arr, 0, n - 1, X) + 1 << endl ; 
	}
}

