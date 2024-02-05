#include <iostream>
#include <queue>
#include <math.h>
#include <map>
using namespace std;

queue<int> qu ;

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		int n, step = 0 ;
		cin >> n ;
		map<int, bool> mp;
		queue<pair<int,int>> qu ;
		qu.push({n , 0}) ;
		while(1)
		{
			pair<int,int> tmp = qu.front();
			qu.pop() ;
			//cout << tmp.first << endl ;
			if(tmp.first == 2)
			{
				cout << tmp.second + 1 << endl ;
				break ;
			}
			for(int i = 2 ; i <= sqrt(tmp.first) ; i++)
			{
				if(tmp.first % i == 0 && mp[tmp.first / i] == false)
				{
					mp[tmp.first /i] = true ;
					qu.push({tmp.first /i, tmp.second + 1}) ; 
				}
			}
			qu.push({tmp.first - 1 , tmp.second + 1}) ; 
		} 
	}
}

