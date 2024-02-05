#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct compare
{
	bool operator()(int a , int b)
	{
		return a < b;
	}	
};


int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		long long k, n, res = 0 ; 
		cin >> k ; 
		string s ;
		cin >> s ;
		n = s.length() ;
		map<char, int> mp ; 
		priority_queue<int , vector<int> , compare> qu ;
		for(int i = 0 ; i < n ; i++)
			mp[s[i]]++ ;
		for(auto x : mp)
			qu.push(x.second) ;
		while(k > 0)
		{
			int tmp = qu.top() ; 
			qu.pop() ;
			tmp-- ; 
			k-- ;
			qu.push(tmp) ;
			//cout << qu.top() << " " ;
			// << endl; 
		}
		while(!qu.empty())
		{
			res += qu.top() * qu.top()  ;
			qu.pop() ;
		}
		cout << res << endl ;
	}
}

