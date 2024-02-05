#include <iostream>
#include <set>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, tmp, p = 2 ;
		cin >> n ; 
		set <int> st;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> tmp ;
			st.insert(tmp) ; 
		}
		if(st.size() < 2) cout << -1 << endl ;
		else
		{
			for(auto x : st)
			{
				if(p > 0)
				{
					cout << x << " " ;
					p-- ;
				}
				if(p == 0) break ;
			}
			cout << endl ;
		}
	}
}

