#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, m, tmp ;
		cin >> n >> m ; 
		vector<int> vt ; 
		for(int i = 0 ; i < n ; i++)
		{
			cin >> tmp ; 
			vt.push_back(tmp) ; 
		}
		for(int j = 0 ; j < m ; j++)
		{
			cin >> tmp ;
			vt.push_back(tmp) ; 
		}
		sort(vt.begin() , vt.end()) ;
		for(auto x : vt) cout << x << " " ;
		cout << endl ;
	}
}

