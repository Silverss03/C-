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
		int n, k, res = 0 ;
		cin >> n >> k ;
		int arr[n] ; 
		map <int, int> mp ;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i] ; 
			mp[arr[i]]++ ;
		}
		sort(arr, arr + n) ;
		for(int i = 0 ; i < n ; i++){
			res += mp[k - arr[i]] ;
			if(k - arr[i] == arr[i]) res-- ;
		}
		cout << res/2 << endl; 
	}
}

