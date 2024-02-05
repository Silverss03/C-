#include <bits/stdc++.h>
using namespace std ;

int n, arr[12], check[12] ; 
vector<vector<int>> res ; 

void act(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0)
		{
			arr[i] = j ; 
			check[j] = 1 ;
			if(i == n)
			{
				vector<int> vt ;
				for(int k = 1 ; k <= n ; k++)
				{
					vt.push_back(arr[k]) ;
				}
				res.push_back(vt) ;
			}
			else
			{
				act(i + 1) ;
			}
			check[j] = 0 ;
		}
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		res.clear() ;
		memset(check, 0, sizeof(check)) ;
		cin >> n ;
		act(1) ;
		for(int i = res.size() - 1 ; i >= 0 ; i--)
		{
			for(auto x : res[i])
			{
				cout << x ;
			}
			cout << " " ;
		}
		cout << endl ;
		
	}
}
