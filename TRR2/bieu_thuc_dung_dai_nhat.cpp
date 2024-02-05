#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string s ;
		cin >> s ;
		int res = 0 ;
		queue<char> qu ;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '(')
			{
				int tmp = 0 ;
				qu.push(s[i]) ; 
			}
			else
			{
				
			}
		}
	}
}

