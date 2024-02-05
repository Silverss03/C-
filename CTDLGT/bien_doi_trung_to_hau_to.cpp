#include <iostream>
#include <stack>
using namespace std;

int priority(char x)
{
	if(x == '^') return 5 ;
	if(x == '*' || x == '/') return 4 ;
	if(x == '+' || x == '-') return 3 ;
	return 2 ;
}

int main()
{
	int tests; 
	cin >> tests;
	while(tests--)
	{
		string s, res = "" ;
		cin >> s ;
		stack <char> st ;
		for(int i = 0 ; i < s.length()  ; i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z') res += s[i] ;
			else if(s[i] >= 'a' && s[i] <= 'z') res += s[i] ;
			else if(s[i] == '(') st.push(s[i]) ;
			else if(s[i] == ')')
			{
				while(st.size() && st.top() != '(')
				{
					res += st.top() ;
					st.pop() ; 
				}
				st.pop() ; 
			} 
			else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				while(st.size() && priority(st.top()) >= priority(s[i]))
				{
					res += st.top() ;
					st.pop() ;
				}
				st.push(s[i]) ; 
			}
		}
		while(st.size() && st.top() != '(')
		{
			res += st.top() ;
			st.pop() ;
		}
		cout << res << endl ;
	}
}

