#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n , s, res = 32, ok ;
int arr[32], sum[32] ;

void act(int sum_idx, int curr_sum, int curr_idx)
{
	if(curr_sum == s)
	{
		ok = 1 ;
		if(res > sum_idx) res = sum_idx ;
		return ;
	}
	else if(curr_sum > s) return ; 
	for(int i = curr_idx; i < n ; i++)
	{
		curr_sum += arr[i] ; 
		sum[sum_idx] = arr[i] ; 
		act(sum_idx + 1, curr_sum, i + 1) ;
		curr_sum -= arr[i] ;	
	}	
} 

int main()
{
	int tests ;
	cin >> tests; 
	while(tests--)
	{
		ok = 0 ;
		res = 32 ; 
		cin >> n >> s ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ;
		act(0, 0, 0) ;	
		if(ok == 1)	cout << res << endl ;	
		else cout << -1 << endl ;
	}
}

