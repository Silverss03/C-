#include <iostream>
#include <stack>
using namespace std;

int count(int a, int b, char c)
{
	if(c == '+') return a + b ;
	if(c == '-') return a - b ; 
	if(c == '*') return a * b;
	if(c == '/') return a/b ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string s; 
		cin >> s ; 
		stack <int> st; 
		for(int i = s.length() - 1  ; i >= 0 ; i--)
		{
			if((s[i] >= '0') && (s[i] <= '9'))
			{
				int tmp = s[i] - '0' ;
				st.push(tmp) ; 
			}
			else
			{
				int a = st.top() ;
				st.pop() ;
				int b = st.top();
				st.pop() ;
				//cout << a << " " << b << " " << s[i] << endl ;
				int tmp = count(a, b, s[i])  ;
				st.push(tmp) ; 
				//cout << tmp << endl ;
			}
		}
		cout << st.top() << endl  ;
	}
}

