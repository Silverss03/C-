#include <iostream>
#include <map>
#include <stack>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int curr = 0 ;
		string s, res = "" ;
		cin >> s ;
		stack<char> st_c ;
		stack<int> st_i ;
		if(s[0] == '[') st_i.push(1) ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] >= '0' && s[i] < '9')
			{
				curr = curr * 10 + (s[i] - '0') ;
			}
			else if(s[i] == '[')
			{
				if(i > 0 && (s[i - 1] < '0' || s[i - 1] > '9'))
				{
					st_i.push(1) ; 
				}
				else
				{
					st_i.push(curr) ;
					curr = 0 ; 
				}
				st_c.push(s[i]) ; 
			}
			else if(s[i] == ']')
			{
				int times = st_i.top() ;
				st_i.pop() ; 
				string tmp = "" ;
				while(!st_c.empty() && st_c.top() != '[')
				{
					tmp += st_c.top() ;
					st_c.pop() ; 
				}
				st_c.pop() ; 
				for(int k = 0 ; k < times ; k++)
				{
					for(int j = tmp.length() - 1 ; j >= 0 ; j--)
					{
						st_c.push(tmp[j]) ; 
					}
				}

			}
			else
			{
				st_c.push(s[i] ) ; 
			}
		} 
		while(!st_c.empty())
		{
			res += st_c.top() ;
			st_c.pop() ;
		}
		for(int i = res.length() - 1 ; i >= 0 ; i--)
		{
			cout << res[i] ;
		}
		cout << endl ;
	}
}

