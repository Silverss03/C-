#include <iostream>
#include <cstring>
using namespace std;

int n, sum, res = 0 ;

void act(int arr[], int num[], int k)
{
	for(int i = 0 ; i <= 1 ; i++)
	{
		arr[k] = i ; 
		if(k == n)
		{
			int tmp = 0 ;
			for(int j = 1 ; j <= n ; j++)
			{
				tmp += (arr[j] * num[j]) ;
			}
			if(tmp == sum)
			{
				res++ ;
				for(int j = 1; j <= n ; j++)
				{
					if(arr[j] == 1) cout << num[j] << " " ;
				}
				cout << endl ;
			}
		}
		else
		{
			act(arr, num, k + 1) ;
		}
	}
}
int main()
{
	cin >> n >> sum; 
	int arr[n], num[n] ;
	for(int i = 1 ; i <= n ; i++) cin >> num[i] ;
	act(arr, num, 1) ;
	cout << res << endl ;
}

