#include <iostream>
#include <algorithm>
using namespace std;

int n, tar , arr[100], ok = 0, res[100] ;

void act(int idx, int sum, int curr)
{
	if(sum == tar)
	{
		ok = 1 ;
		cout << "[" ;
		for(int i = 0 ; i < idx - 1; i++)
		{
			cout << res[i] << " " ;
		}
		cout << res[idx - 1] << "]"; 
		return ;
	}
	else if(sum > tar) return ;
	for(int i = curr ; i < n ; i++)
	{
		sum += arr[i] ;
		res[idx] = arr[i] ;
		act(idx + 1, sum, i) ;
		sum -= arr[i] ;
	}	
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		ok = 0 ;
		cin >> n >> tar;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		act(0, 0, 0) ;
		sort(arr, arr + n) ;
		if(ok == 0)
		{
			cout << -1 ; 
		}
		cout << endl ;
	}
}

