#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, x ; 
		cin >> n >> x  ;
		int arr[n] ;
		map <int, int> mp ; 
		for(int i = 0 ; i < n ; i++) 
		{
			cin >> arr[i] ;
			mp[arr[i]]++ ;
		}
		if(binary_search(arr, arr + n, x))
		{
			cout << mp[x]<< endl ;
		}
		else cout << -1 << endl ;
	}
}

