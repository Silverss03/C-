#include <iostream>
#include <cstring>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, sum , arr[100] ;
		cin >> n >> sum;
		bool dp[sum + 1] ;
		memset(dp, false, sizeof(dp)) ;
		dp[0] = true ;
		map<int, vector<int>> mp;
		mp[0] = {} ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		for(int i = 0 ; i <= sum ; i++)
		{
			if(dp[i])
			{
				for(int j = 0 ; j < n ; j++)
				{
					if(i + arr[j] <= sum)
					{
						dp[i + arr[j]] = true ;
						vector <int> tmp = mp[i];
						tmp.push_back(arr[j]) ;
						mp[i + arr[j]] = tmp ;
					}
				}
			}
		}
		if(dp[sum] == false)
		{
			cout << "NULL\n" ;
		}
		else
		{
			for(auto x : mp[sum])
			{
				cout << x << " " ;
			}
			cout << endl ;
		}
	}
}

