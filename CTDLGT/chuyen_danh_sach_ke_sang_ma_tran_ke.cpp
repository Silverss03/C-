#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[102][102] ;
	memset(arr, 0, sizeof(arr)) ;
	cin.ignore() ;
	for(int i = 1 ; i <= n ; i++)
	{
		string s ;
		getline(cin, s) ;
		stringstream ss(s) ;
		int token ;
		while(ss >> token)
		{
			arr[i][token] = 1 ;
			arr[token][i] = 1 ;
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cout << arr[i][j] << " " ;
		}
		cout << endl ;
	}
}

