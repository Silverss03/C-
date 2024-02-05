#include <iostream>
#include <vector>
using namespace std ;

int n, k ;
char arr[17] ;
vector<vector<char>> res ;

void act(int i)
{
	for(char j = 'A' ; j <= 'B' ; j++)
	{
		arr[i] = j ;
		if(i == n)
		{
			int tmp = 0, l = 1 ; 
			while(l <= n)
			{
				int count = 0 ;
				while(arr[l] == 'A')
				{
					count++ ;
					l++; 
				}
				if(count == k) tmp++ ;
				l++ ;
			}
			if(tmp == 1)
			{
				vector<char> vt ;
				for(int l = 1 ; l <= n ; l++)
				{
					vt.push_back(arr[l]) ; 
				}
				res.push_back(vt) ;
			}
		}
		else
		{
			act(i + 1) ;
		}
	}
}
int main()
{
	cin >> n >> k ;
	act(1) ;
	cout << res.size() << endl ;
	for(auto x :res)
	{
		for(auto y : x)
		{
			cout << y ;
		}
		cout << endl ;
	}
}
