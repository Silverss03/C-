#include <iostream>
#include <map>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, tmp, m = 0, res = 0;
		cin >> n ; 
		map<int, int> mp ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> tmp ;
			mp[tmp]++ ;
			if(mp[tmp] > m)
			{
				m = mp[tmp] ; 
				res = tmp ;
			}
		}
		if(m > n/2) cout << res << endl ;
		else cout << "NO\n" ;
	}
}

