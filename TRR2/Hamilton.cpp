#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int arr[102][102], check[102], n, start, step = 0 ;
vector <int> vt ;
	
void Hamilton(int i, int step, vector <int> vt)
{
	step++ ;
	vt.push_back(i) ; 
	check[i] = 1 ;
	for(int j = 1 ; j <= n ; j++){
		if(arr[i][j] == 1){
			if(j == start && step == n + 1)
			{
				for(auto x : vt) cout << x << " " ;
				cout << j << endl ;
			}
			else if(check[j] == 0)
			{
				Hamilton(j, step, vt) ;
				check[j] = 0 ;	
			}
		}
	}
}

int main()
{
	cin >> n >> start ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	} 
	Hamilton(start, 1, vt) ;
}

