#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests;
	cin >> tests;
	cin.ignore() ;
	while(tests--)
	{
		int ans = 1 ;
		string s ;
		stack<char> st ;
		getline(cin, s) ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '(' || s[i] == '[' )
			{
				st.push(s[i]) ; 
			}
			else if( s[i] == ')')
			{
				if(!st.empty() && st.top() == '(')
				{
					st.pop() ;
				}
				else
				{
					st.push(s[i]) ; 
				}
			}
			else if( s[i] == ']')
			{
				if(!st.empty() && st.top() == '[')
				{
					st.pop() ;
				}
				else 
				{
					st.push(s[i]) ; 
				}
			}
		}
		if(st.empty()) cout << "YES" << endl;
		else cout << "NO\n" ;
	}
}

