#include <iostream>
#include <stack>
#include <vector>
using namespace std;

string operate(string b, string a, char operand)
{
	string out = "(";
	out += b ;
	out += operand ;
	out += a ;
	out += ")" ;
	return out	;
}

int main()
{
	int tests;
	cin >> tests ; 
	while(tests--)
	{
		string s ;
		cin >> s ; 
		stack<string> st ;
		vector<string> vt ;
		for(int i = s.length() - 1 ; i >= 0 ; i--)
		{
			//cout << s[i] << endl ;
			if(s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
			{
				string a = st.top() ;
				//cout << st.top() << endl ;
				st.pop() ;
				string b = st.top() ; 
				//cout << st.top() << endl;
				st.pop() ;
				string tmp = operate(a, b, s[i]) ;
				st.push(tmp) ; 
			}
			else
			{
				string tmp = "";
				tmp += s[i] ;
				st.push(tmp) ; 
			}
		}
		cout << st.top() << endl ;
	}
}

