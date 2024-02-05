#include <iostream>
#include <stack>
using namespace std;

string operate(string a, string b, char c)
{
	string res ;
	res += a ;
	res += b ;
	res += c ;
	return res ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string s ; 
		cin >> s ;
		stack<string> st ;
		for(int i = s.length() - 1 ; i >= 0 ; i--)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string a = "", b = "" ;
				a += st.top() ;
				st.pop() ;
				b += st.top() ;
				st.pop() ;
				string tmp = operate(a, b, s[i]) ;
				st.push(tmp) ;  
			}
			else
			{
				string tmp = "" ;
				tmp += s[i] ;
				st.push(tmp) ; 
			}
		}
		while(!st.empty())
		{
			cout << st.top() ;
			st.pop() ;
		}
		cout << endl ;
	}
}

