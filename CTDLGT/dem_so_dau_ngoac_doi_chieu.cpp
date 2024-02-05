#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int res = 0 ;
		string s ;
		cin >> s ; 
		vector <char> vt; 
		stack<char> st ;
		for(int i = 0 ; i < s.length()  ; i++)
		{
			if(st.size() && st.top() == '(' && s[i] == ')') st.pop() ;
			else
			{
				st.push(s[i]) ;
			}
		}
		while(!st.empty())
		{
			vt.insert(vt.begin(), st.top() ) ;
			st.pop() ;
		}
		int l = 0, r = 0 ; 
		for(auto x : vt)
		{
			if(x == '(') l++ ;
			else r++ ;
		}
		res += l/2 + r/2 ;
		res += l%2 + r%2 ;
		cout << res << endl;
	}
}

