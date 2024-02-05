#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int tests; 
	cin >> tests;
	while(tests--)
	{
		string s ; 
		cin >> s ; 
		stack<char> st ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '(')
			{
				if(i > 0 && s[i - 1] == '-' || s[i - 1] == '–' || s[i - 1] == '+') st.push(s[i - 1]) ; 
			}
			if(st.size() && (st.top() == '-' || st.top() == '–'))
			{
				if(s[i] == '+') s[i] = '-' ;
				else if(s[i] == '–' || s[i] == '-') s[i] = '+' ;
			} 
			if(st.size() && s[i] == ')') st.pop() ;
		}
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] != '(' && s[i] != ')') cout << s[i] ;
		}
		cout << endl ;
	}
}

