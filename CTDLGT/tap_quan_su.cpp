#include <iostream>
#include <cstring>
using namespace std;

int n, k, arr[50], check[50], res, last = 0 ;

void act()
{
	int i = k ;
	
	while(i > 0 && arr[i] >= n - k + i)
	{
		i-- ;
	}
	if(i == 0)
	{
		last = 1;
		return ;
	}
	arr[i]++ ;
	
	for(int j = i + 1 ; j <= n ; j++)
	{
		arr[j] = arr[j - 1] + 1 ;
	}
	
	for(int i = 1 ; i <= k ; i++)
	{
		check[arr[i]] = 1;
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		res = 0 ;
		last = 0 ;
		memset(check, 0, sizeof(check)) ;
		cin >> n >> k ; 
		
		for(int i = 1 ; i <= k ; i++)
		{
			cin >> arr[i] ;
			check[arr[i]] = -1 ;	
		}
		
		act() ;
		
		if(last == 0)
		{
			for(int i = 1 ; i <= n ; i++)
			{
				if(check[i] == -1)
				{
					res++ ;
				}
			}
			
			cout << res << endl ;
		}
		
		else
		{
			cout << k << endl ;
		}

	}


}

