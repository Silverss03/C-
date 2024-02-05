#include <iostream>
#include <stack>
using namespace std;

string operate(string a, string b, char operand)
{
	string res = "(" ;
	res += a ;
	res += operand ;
	res += b ;
	res += ')' ;
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
			if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
			{
				string a = "", b = "", tmp ;
				a += st.top() ;
				st.pop() ;
				b += st.top() ; 
				st.pop() ;
				tmp = operate (b, a, s[i]) ;
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

