#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, k, res = 0 ; 
int arr[102], n_arr[102], tmp[102] ;

void Try(int i)
{
	for(int j = tmp[i - 1] + 1 ; j <= n - k + i ; j++)
	{
		tmp[i] = j ;
		n_arr[i] = arr[tmp[i]] ;
		if(i == k)
		{
			int c = 1 ;
			for(int m = 1; m < k ; m++)
			{
				if(n_arr[m] > n_arr[m + 1])
				{
					c = 0 ;
					break ;
				}
			}
			if(c == 1)res++ ;
		}
		else
			Try(i + 1) ;
	}
}

int main()
{
	cin >> n >> k ; 
	memset(tmp, 0 , sizeof(tmp)) ;
	for(int i = 1 ; i <= n ; i++)
		cin >> arr[i] ; 
	Try(1) ;
	cout << res << endl ;
}

