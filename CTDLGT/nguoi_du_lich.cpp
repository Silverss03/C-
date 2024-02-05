#include <iostream>
using namespace std ;

int n, prices[100][100], min_prices = 1e9, res = 1e9, journey[100], check[100], val = 0 ;

void act(int i)
{
	if(val + (n - i + 1) * min_prices >= res) return ;
	
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0)
		{
			check[j] = 1 ; 
			journey[i] = j ;
			val += prices[journey[i - 1]][j] ;
			if(i == n)
			{
				if(val + prices[journey[n]][1] <= res)
				{
					res = val + prices[journey[n]][1] ;
				}
			}
			else act(i + 1) ;
			check[j] = 0 ;
			val -= prices[journey[i - 1]][j] ;
		}
	}
}

int main()
{
	cin >> n ;
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cin >> prices[i][j] ;
			if(prices[i][j] != 0) min_prices = min(min_prices, prices[i][j]) ;
		}
	}
	
	journey[1] = 1 ;
	check[1] = 1 ;
	act(2) ;
	cout << res << endl ;
}
