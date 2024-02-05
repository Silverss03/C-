#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<int, vector<int>> mp ;

int n, sum ;
vector <int> how_sum(int sum, int arr[], map<int, vector<int>> &mp )
{
	if(mp.find(sum) != mp.end()) 
		return mp[sum] ;
	if(sum == 0)
		return {} ;
	if(sum < 0) 
		return {-1} ; 
	for(int i = 0 ; i < n ; i++)
	{
		int remain = sum - arr[i] ;
		vector<int> res = how_sum(remain, arr, mp) ;
		if(res != vector<int>{-1})
		{
			res.push_back(arr[i]) ;
			mp[sum] = res ;
			return res ;
		}
	}
	mp[sum] = {-1} ;
	return {-1} ;
}
int main()
{
	cin >> n >> sum; 
	int arr[n] ; 
	for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
	vector<int> result = how_sum(sum, arr, mp);
    if (result == vector<int>{-1}) {
        cout << "NULL";
    } 
	else {
        for (int i = result.size() - 1; i >= 0; i--) {
            cout << result[i] << " ";
        }
    }
}

