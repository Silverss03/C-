#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int index = 0, n, action ;
	cin >> action ;  
	string s; 
	stack<int> st;
	while(action--)
	{
		cin >> s ;
		if(s == "PUSH")
		{
			cin >> n ;
			//cin.ignore() ;
			st.push(n) ;
		}
		else if(s == "PRINT")
		{
			if(!st.empty())
			{
				vector <int> vt ;
				cout << st.top() ;
				while(st.size())
				{
					vt.insert(vt.begin(), st.top()) ;
					st.pop() ;
				}
				for(auto x : vt)
				{
					st.push(x) ; 
				}
				cout << endl ;
			}
			else
			{
				cout << "NONE\n" ;
			}
		}
		else if(s == "POP")
		{
			if(st.size()) 
			{
				st.pop() ;
			}
		}
	}
}

