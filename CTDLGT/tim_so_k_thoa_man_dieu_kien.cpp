#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, k, res = 0 ; 
		cin >> n >> k ; 
		queue<string> qu ;
		qu.push("1") ;
		qu.push("2") ;
		qu.push("3") ;
		qu.push("4") ;
		qu.push("5") ;
		while(1)
		{
			int curr ;
			string str = qu.front(), token ;
			qu.pop() ;
			stringstream ss(str) ;
			ss >> curr ; 
			if(curr >= n && curr <= k)
			{
				res++ ; 	
			}
			else if (curr > k) break ;
			for(char i = '0' ; i <= '5' ; i++)
			{
				int check = 1 ;
				for(int j = 0 ; j < str.length() ; j++)
				{
					if(str[j] == i)
					{
						check = 0 ; 
						break ;
					}
				}
				if(check == 1)
				{
					qu.push(str + i) ; 
				}
			}
		}
		cout << res << endl ;     
	}
}

