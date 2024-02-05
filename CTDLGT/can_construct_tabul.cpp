#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests;
	while(tests--)
	{
		string tar ;
		cin >> tar ;
		bool check[100] ;
		memset(check, false, sizeof(check)) ;
		int n ; 
		cin >> n ;
		string arr[100] ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		check[0] = true ;
		for(int i = 0 ; i <= tar.length() ; i++)
		{
			if(check[i] == true)
			{
				for(int j = 0 ; j < n ; j++)
				{
					if(tar.substr(i, arr[j].length()) == arr[j])
					{
						check[i + arr[j].length()] = true ;
					}
				}
			}
		}
		if(check[tar.length()]) cout << "true\n" ;
		else cout << "false\n" ;
	}
}

