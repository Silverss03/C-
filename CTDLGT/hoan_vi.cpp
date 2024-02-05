#include <iostream>
#include <cstring>
using namespace std;

int n, arr[12], m, times, check[12] ;

void out()
{
	times++ ; 
	if(times % m == 0)
	{
		for(int i = 1 ; i <= n ; i++)
		{
			cout << arr[i] << " " ;
		}
		cout << endl ;
	}
}

void act(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0)
		{
			check[j] = 1 ;
			arr[i] = j ;
			if(i == n) out() ; 
			else act(i + 1) ;
			check[j] = 0 ;
		}	
	} 
}
int main()
{
	memset(check, 0, sizeof(check)) ;
	times = 0 ;
	cin >> n >> m ; 
	act(1) ;
}

