#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;

long long cal(long long a, long long b, char c)
{
	if(c == '+') return a + b ; 
	else if(c == '-') return a - b ;
	else if(c == '*') return a * b ;
	else if(c == '–') return a - b ;
	else return a/b ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ;
		cin.ignore() ;
		string s, token ;
		getline(cin, s) ; 
		stringstream ss(s) ;
		stack<long long> qu ;
		if(s[s.length() - 1] == '+' || s[s.length() - 1] == '-' || s[s.length() - 1] == '*' || s[s.length() - 1] == '/' || s[s.length() - 1] == '–')
		{
			while(ss >> token)
			{
				if(token == "+" || token == "-" || token == "*" || token == "/" || token == "–")
				{
					long long a = qu.top() ; 
					qu.pop() ;
					long long b = qu.top() ; 
					qu.pop() ; 
					long long tmp = cal(b, a, token[0]) ;
					//cout << b << " " << token[0] << " " << a << " " << tmp << endl ;
					qu.push(tmp) ; 
				}
				else
				{
					stringstream sss(token) ;
					long long tmp ;
					sss >> tmp ; 
					qu.push(tmp) ; 
				}
			}
			cout << qu.top() << endl ;
		}
		else
		{
			vector<string> vt ;
			while(ss >> token)
			{
				vt.push_back(token) ; 
			}
			for(int i = vt.size() - 1 ; i>= 0 ; i--)
			{
				if(vt[i] == "+" || vt[i] == "-" || vt[i] == "*" || vt[i] == "/" || vt[i] == "–")
				{
					long long a = qu.top() ; 
					qu.pop() ;
					long long b = qu.top() ; 
					qu.pop() ; 
					long long tmp = cal(a, b, vt[i][0]) ;
					qu.push(tmp) ; 
				}
				else
				{
					stringstream sss(vt[i]) ;
					long long tmp ;
					sss >> tmp ; 
					qu.push(tmp) ; 
				}
			}
			cout << qu.top() << endl ;
		}
	}
}

