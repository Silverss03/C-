#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	cin.ignore() ;
	while(tests--)
	{
		int ans = 1 ;
		string s ; 
		getline(cin, s) ;
		stack<char> st ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			st.push(s[i]) ; 
			//cout << st.size() << endl; 
			//cout << st.top()  << endl ;
			if(s[i] == ')')	
			{
				int suf = 0 ;
				while(st.top() != '(')
				{
					if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
					{
						suf++ ;
					}
					st.pop() ;
				}
				st.pop() ;
				if(suf == 0)
				{
					ans = 0 ;
				}	
			}		
		}
		if(ans == 0)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n" ;
		}
	}
}

