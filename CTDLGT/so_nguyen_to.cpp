#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>
using namespace std;

int n, p, s, arr[202], done  ;
vector<int> vt  ;
vector<vector<int>> res ;

bool check(int n)
{
	if(n < 2) return 0 ;
	if(n % 2 == 0 && n != 2) return 0 ;
	for(int i = 3 ; i <= sqrt(n) ; i += 2)
	{
		if(n % i == 0) return 0 ;
	}
	return 1 ;
}

void act()
{
	while(done == 0)
	{
		int i = n - 1 ;
		while(i >= 0 && arr[i] >= vt.size() - n + i) i-- ;
		if(i < 0)
		{
			done = 1 ;
			int sum = 0 ;
			for(int j = 0 ; j < n ; j++)
			{
				sum += vt[arr[j]] ;
			}
			if(sum == s)
			{
				vector<int> tmp ;
				for(int j = 0 ; j < n ; j++)
				{
					tmp.push_back(vt[arr[j]]) ;
				}
				res.push_back(tmp) ;
			}
		}
		else
		{
			arr[i]++ ;
			
			for(int j = i + 1 ; j < n ; j++)
			{
				arr[j] = arr[j - 1] + 1;
			}
			
			int sum = 0 ;
			
			for(int j = 0 ; j < n ; j++)
			{
				sum += vt[arr[j]] ;
			}
			
			if(sum == s)
			{
				vector<int> tmp ;
				
				for(int j = 0 ; j < n ; j++)
				{
					tmp.push_back(vt[arr[j]]) ;
				}
				
				res.push_back(tmp) ;
			}
		}

	}

}

int main()
{
	int tests;
	cin >> tests;
	while(tests--)
	{
		done = 0 ;
		memset(arr, 0, sizeof(arr)) ;
		vt.clear() ;
		res.clear() ;
		cin >> n >> p >> s ;
		
		for(int i = p + 1; i <= s; i++)
		{
			if(check(i))
			{
				vt.push_back(i) ;
			}
		}
		
		if(vt.size() < n)
		{
			cout << 0 << endl ;
		}
		else
		{
			int sum = 0 ;
			for(int i = 0 ; i < n ; i++)
			{
				arr[i] = i ;
				sum += vt[i] ;
			}

			if(sum == s)
			{
				vector<int> tmp ;
				for(int i = 0 ; i < n ; i++)
				{
					tmp.push_back(arr[i]) ;
				}
				res.push_back(tmp) ;
			}
			act() ;
			cout << res.size() << endl ;
			for(auto x : res)
			{
				for(auto y : x)
				{
					cout << y << " " ;
				}
				cout << endl ;
			}
		}
	}
}

