#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int acts ;
	cin >> acts ;
	queue<int> qu ;
	while(acts--)
	{
		string s ;
		cin >> s ;
		if(s == "PUSH")
		{
			int n ;
			cin >> n ;
			qu.push(n) ; 
		}
		else if(s == "PRINTFRONT")
		{
			if(qu.empty())
			{
				cout << "NONE\n" ;
			}
			else
			{
				cout << qu.front() << endl ;
			}
		}
		else
		{
			if(!qu.empty())
				qu.pop() ;
		}
	}
}

