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
		if(s == "PUSHBACK")
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
		else if(s == "POPFRONT")
		{
			if(!qu.empty())
				qu.pop() ;
		}
		else if(s == "PUSHFRONT")
		{
			int n ; 
			cin >> n ;
			vector<int> vt ;
			while(!qu.empty() )
			{
				vt.push_back(qu.front()) ;
				qu.pop() ; 
			}
			qu.push(n) ;
			for(int i = 0 ; i < vt.size() ; i++)
			{
				qu.push(vt[i]) ;
			} 
		}
		else if(s == "PRINTBACK")
		{
			if(qu.empty())
			{
				cout << "NONE\n" ;
			}
			else
			{
				vector<int> vt ;
				while(!qu.empty() )
				{
					vt.push_back(qu.front()) ;
					qu.pop() ; 
				}
				cout << vt[vt.size() - 1] << endl ;
				for(int i = 0 ; i < vt.size() ; i++)
				{
					qu.push(vt[i]) ;
				} 
			}
		}
		else
		{
			if(!qu.empty())
			{
				vector<int> vt ;
				while(!qu.empty() )
				{
					vt.push_back(qu.front()) ;
					qu.pop() ; 
				}
				for(int i = 0 ; i < vt.size() - 1 ; i++)
				{
					qu.push(vt[i]) ;
				} 
			}
		}
	}
}

