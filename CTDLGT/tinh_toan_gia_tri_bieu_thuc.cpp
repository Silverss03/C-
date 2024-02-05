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
		int n, f = 0 ; 
		cin >> n ;
		vector<string> vt ;
		stack<long long> qu ;
		for(int i = 0 ; i < n ; i++)
		{
			string token ;
			cin >> token ;
			vt.push_back(token) ; 
			if(i == n - 1 && (token[token.length() - 1] == '+' || token[token.length() - 1] == '-' || token[token.length() - 1] == '–' || token[token.length() - 1] == '*' || token[token.length() - 1] == '/')) f = 1 ;
		}
		if(f == 0)
		{
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
					//cout << vt[i] << endl ;
					stringstream sss(vt[i]) ;
					long long tmp ;
					sss >> tmp ; 
					qu.push(tmp) ; 
				}
			}
			cout << qu.top() << endl ;
		}
		else
		{
			for(int i = 0 ; i < vt.size() ; i++)
			{
				if(vt[i] == "+" || vt[i] == "-" || vt[i] == "*" || vt[i] == "/" || vt[i] == "–")
				{
					long long a = qu.top() ; 
					qu.pop() ;
					long long b = qu.top() ; 
					qu.pop() ; 
					long long tmp = cal(b, a, vt[i][0]) ;
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
