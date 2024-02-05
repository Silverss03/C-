#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		int ans = 1 ;
		string s ;
		cin >> s ; 
		stack <char> st ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				st.push(s[i]) ; 
			}
			else
			{
				if(( st.size() && s[i] != ')' && st.top() == '('  ) || (st.size() && s[i] != ']' && st.top() == '[' ) || (st.size() && s[i] != '}' && st.top() == '{'))
				{
					ans = 0 ;
					break ;
				}
				else
				{
					if(st.size()) st.pop() ;
				}
			}
		}
		if(ans == 1) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

