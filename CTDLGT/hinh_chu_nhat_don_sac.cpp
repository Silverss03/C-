#include <iostream>
#include <stack>
using namespace std;

long long cal(long long H[], long long n)
{
	long long L[1000002], R[1000002], S = 0 ;
	stack <long long> st ;
	
	for(int i = 0 ; i < n ; i++)
	{
		while(!st.empty() && H[st.top()] >= H[i]) 
		{
			st.pop() ;
		}
		if(st.empty()) L[i] = 0 ;
		else L[i] = st.top() + 1 ; 
		st.push(i) ; 
	} 
	
	while(!st.empty())
	{
		st.pop() ; 
	}
	
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		while(!st.empty() && H[st.top()] >= H[i])
		{
			st.pop() ;
		}
		if(st.empty() ) R[i] = n - 1 ;
		else R[i] = st.top() - 1 ;
		st.push(i) ; 	
	} 
		
	for(int i = 0 ; i < n ; i++)
	{
		long long tmp = (R[i] - L[i] + 1) * H[i] ;
		S = max(S , tmp) ;
	}
	
	return S ;
}
int main()
{
	long long n, m; 
	cin >> m >> n ; 
	long long H1[1000002], H2[1000002] ;
	
	for(int i = 0 ; i < n ; i++)
	{
		cin >> H1[i] ;
		H2[i] = m - H1[i] ;
	}
	
	long long res = max(cal(H1, n), cal(H2, n)) ;
	cout << res << endl ;
}

