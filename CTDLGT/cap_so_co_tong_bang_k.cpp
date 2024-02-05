#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k ;
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		long long res = 0 ;
		cin >> n >> k ;
		vector<int> vt ;
		for(int i = 0 ; i < n ; i++)
		{
			int tmp ;
			cin >> tmp ;
			vt.push_back(tmp) ; 
		}
		sort(vt.begin() , vt.end()) ;
		for(int i = 0 ; i < n ; i++)
		{
			//cout << k - vt[i] << " " << upper_bound(vt.begin() + i + 1, vt.end() , k - vt[i]) - lower_bound(vt.begin() + i + 1, vt.end(), k - vt[i] ) << endl ;
			res += upper_bound(vt.begin() + i + 1, vt.end() , k - vt[i]) - lower_bound(vt.begin() + i + 1, vt.end(), k - vt[i] ) ;
		}
		cout << res << endl ;
	}
}

