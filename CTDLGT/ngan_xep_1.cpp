#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int index = 0, n ; 
	string s; 
	stack<int> st;
	while(cin >> s)
	{
		if(s == "push")
		{
			cin >> n ;
			cin.ignore() ;
			st.push(n) ;
		}
		else if(s == "show")
		{
			if(!st.empty())
			{
				vector <int> vt ;
				while(st.size())
				{
					int tmp = st.top() ;
					vt.insert(vt.begin(), tmp) ;
					st.pop() ;
				}
				for(auto x : vt)
				{
					cout << x << " " ;
					st.push(x) ; 
				}
				cout << endl ;
			}
			else
			{
				cout << "empty\n" ;
				break;
			}
		}
		else if(s == "pop")
		{
			if(st.size()) 
			{
				st.pop() ;
			}
			else
			{
				cout << "empty\n" ;
				break;
			}
		}
	}
}


