#include <iostream>
#include <map>
#include <vector>
using namespace std;

int n, sum ; 
map <int, vector<int>> mp ;

vector <int> best_sum(int arr[], int sum, map<int, vector<int>> &mp)
{
	if(mp.find(sum) != mp.end()) 
		return mp[sum] ;
	if(sum == 0)
		return {} ;
	if(sum < 0)
		return {-1} ;
	vector<int> res = {-1} ;
	for(int i = 0 ; i < n ; i++)
	{
		int remain = sum - arr[i] ; 
		vector <int> tmp = best_sum(arr, remain, mp) ;
		if(tmp != vector <int> {-1})
		{
			tmp.push_back(arr[i]);
			mp[sum] = tmp ; 
			if(res == vector<int> {-1} || res.size() > tmp.size() )
			{
				res = tmp ;
			}
		}
	}
	mp[sum] = res ; 
	return res ;	
} 

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		mp.clear() ;
		cin >> n >> sum ; 
		int arr[n] ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		vector <int> vt = best_sum(arr, sum , mp) ;
		if(vt == vector <int> {-1}) cout << "NULL\n" ;
		else
		{
			for(auto x : vt) cout << x << " " ;
			cout << endl ;
		}
	}
}

