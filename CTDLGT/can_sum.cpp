#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int n, sum ; 
map<int, bool> mp ;
bool can_sum(int arr[], int sum)
{
	if(mp.find(sum) != mp.end()) return mp[sum] ;
	if(sum == 0) return true ;
	if(sum < 0) return false ;
	for(int i = 0 ; i < n ; i++)
	{
		int remain = sum - arr[i] ;
		if(can_sum(arr, remain)) 
		{
			mp[sum] = true ;
			return true; 
		}
		
	}
	mp[sum] = false ;
	return false ;	
}
int main()
{
	cin >> n >> sum; 
	int arr[n] ; 
	for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
	if(can_sum(arr, sum)) cout << "1" << endl ;
	else cout << -1 << endl;
}

