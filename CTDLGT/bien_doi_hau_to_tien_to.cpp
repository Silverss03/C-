#include <iostream>
#include <stack>
using namespace std;

string operate(string a, string b, string operand)
{
	string res = "" ;
	res += operand ;
	res += a ;
	res += b ;
	return res ; 
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string s; 
		cin >> s;
		stack <string> st ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string a = "", b = "", c = "" ;
				a += st.top() ;
				st.pop() ;
				b += st.top() ;
				st.pop() ;
				c += s[i] ;
				string tmp = operate(b, a, c) ;
				st.push(tmp) ; 
			}
			else
			{
				string tmp = "" ;
				tmp += s[i] ;
				st.push(tmp) ; 
			}
		}
		while(!st.empty() )
		{
			cout << st.top() ;
			st.pop() ;
		}
		cout << endl ;
	}
}

