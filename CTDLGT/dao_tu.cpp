#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--)
	{
		string s ; 
		getline(cin, s) ;
		stringstream ss(s) ;
		string tmp = "" ;
		stack <string> st ;
		while(ss >> tmp)
		{
			st.push(tmp) ; 
		}
		while(!st.empty() )
		{
			cout << st.top() << " " ;
			st.pop() ;
		}
		cout << endl ;
	}
}

