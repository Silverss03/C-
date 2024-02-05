#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests;
	cin >> tests; 
	while(tests--)
	{
		int n ;
		cin >> n ; 
		queue<string> qu ;
		qu.push("6") ;
		qu.push("8") ;
		vector<string> res ;
		while(1)
		{
			string tmp = qu.front() ;
			qu.pop() ;
			if(tmp.size() > n)
			{
				break ;
			}
			res.push_back(tmp) ;
			qu.push(tmp + "6") ;
			qu.push(tmp + "8") ;  
		}
		for(int i = res.size() - 1 ; i >= 0 ; i--)
		{
			cout << res[i] << " " ;
		}
		cout << endl ;
	}
}

