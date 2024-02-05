#include <bits/stdc++.h>
using namespace std ;

int n, k, arr[16] ;

void act(int i)
{
	for(int j = arr[i - 1] + 1 ; j <= n - k + i ; j++)
	{
		arr[i] = j ;
		if(i == k)
		{
			for(int m = 1 ; m <= k ; m++)
			{
				cout << arr[m] ;
			}
			cout << " "  ;
		}
		else
		{
			act(i + 1) ;
		}
	}	
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> n >> k ;
		memset(arr, 0, sizeof(arr)) ;
		act(1) ;
		cout << endl ;
	}
}
