#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		int res = 0 ; 
		string s ;
		cin >> s ;
		stack<char> st ; 
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '[')
			{
				st.push(s[i]) ; 
			}
			else
			{
				if(!st.empty())
				{
					st.pop() ;
				}
				else
				{
					int j = i ;
					while(s[j] == ']') j++ ; 
					swap(s[i], s[j]) ;
					res += j - i ; 
					st.push(s[i]) ;
				}
			}
		}
		cout << res << endl ;
	}
}

