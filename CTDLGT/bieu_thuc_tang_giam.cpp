#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string s ; 
		cin >> s ;
		stack <int> st ; 
		for(int i = 0 ; i <= s.length() ; i++)
		{
			if(s[i] == 'D' )
			{
				st.push(i + 1) ; 
			}
			else
			{
				cout << i + 1 ;
				while(!st.empty())
				{
					cout << st.top() ;
					st.pop() ;
				}
			}
		}
		cout << endl;
	}
}

