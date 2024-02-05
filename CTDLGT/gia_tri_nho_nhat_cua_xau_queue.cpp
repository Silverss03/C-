#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct mycmp{
	bool operator()(int a, int b)
	{
		return a < b ;
	}
};
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		long long res = 0, k ;
		string s ;
		cin >> k >> s; 
		map<char, long long> mp ;
		if(k >= s.length() ) cout << "0\n" ;
		else
		{
			priority_queue<long long, vector<long long> , mycmp> qu ;
			for(int i = 0 ; i < s.length() ; i++)
			{
				mp[s[i]]++ ;
			}
			for(auto x : mp)
			{
				qu.push(x.second) ;
			}
			for(int i = 0 ; i < k ; i++)
			{
				long long tmp = qu.top() ;
				qu.pop() ;
				tmp-- ;
				qu.push(tmp) ;
			}
			while(!qu.empty())
			{
				res += qu.top() * qu.top() ;
				qu.pop() ;
			}
			cout << res << endl ;
		}
	}
}

