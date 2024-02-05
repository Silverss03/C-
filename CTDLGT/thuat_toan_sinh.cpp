#include <iostream>
#include <cstring>
using namespace std;

void act(int arr[], int n, int k)
{
	for(int i = 0 ; i <= 1 ; i++)
	{
		arr[k] = i ; 
		if(k == n)
		{
			int l = 1 , r = n, ok = 1 ;
			while(l <= r)
			{
				if(arr[l] != arr[r])
				{
					ok = 0 ;
					break ;
				}
				l++ ; 
				r-- ;
			}
			if(ok == 1)
			{
				for(int j = 1 ; j <= n ; j++)
				{
					cout << arr[j] << " " ;
				}
				cout << endl ;
			}
		}
		else
		{
			act(arr, n, k + 1) ;
		}
	}
}
int main()
{
	int n ;
	cin >> n ; 
	int arr[n] ;
	act(arr, n, 1) ;
	
}

