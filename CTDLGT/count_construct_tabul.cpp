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
		int check[100] ;
		memset(check, 0, sizeof(check)) ;
		int n ; 
		cin >> n ;
		string arr[100] ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		check[0] = 1 ;
		for(int i = 0 ; i <= tar.length() ; i++)
		{
			if(check[i] != 0)
			{
				for(int j = 0 ; j < n ; j++)
				{
					if(tar.substr(i, arr[j].length()) == arr[j])
					{
						check[i + arr[j].length()] += check[i] ;
					}
				}
			}
		}
		cout << check[tar.length() ] << endl ;
	}
}

