#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int check[100], n, arr[15][15] , start; 
vector <int> vt ;

void Euler(int i)
{
	stack <int> st ;
	st.push(i) ;
	while(!st.empty())
	{
		int tmp = st.top();
		//cout << tmp << " " ;
		int c = 0 ;
		for(int j = 1 ; j <= n ; j++)
		{
			if(arr[tmp][j] == 1 )
			{
				c = 1 ;
				st.push(j) ; 
				arr[tmp][j] = 0 ;
				arr[j][tmp] = 0 ;
				break ;
			}
		}
		if(c == 0)
		{
			cout << tmp << endl ;
			st.pop() ;
			vt.push_back(tmp) ;
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
	Euler(start) ;
	for(int i = vt.size() - 1 ; i >= 0 ; i--) 
		cout << vt[i] << " " ;
	cout << endl ;
}
 
