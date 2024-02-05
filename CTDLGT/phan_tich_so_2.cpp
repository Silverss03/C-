#include <iostream>
#include <vector>
using namespace std;

int n, arr[12], count = 0 ;
vector<vector<int> > res ; 

void act(int sum, int idx, int remain)
{
	for(int i = sum ; i >= 1 ; i--)
	{
		arr[idx] = i ;
		if(i == remain)
		{
			count++ ;
			vector<int> tmp(arr + 1, arr + idx + 1) ;
			res.push_back(tmp) ; 
		}
		else if(i < remain) act(i, idx + 1,  remain - i) ;
	}
}
int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		count = 0 ;
		res.clear() ;
		cin >> n ;
		act(n, 1, n) ;	
		//cout << count <<endl ; 
		for(int i = 0 ; i < res.size() ; i++)
		{
			cout << "(" ;
			for(int j = 0 ; j < res[i].size() - 1 ; j++)
			{
				cout << res[i][j] << " ";
			}
			cout << res[i][res[i].size() - 1] << ") " ;
		}
		cout << endl ;
	}
}

