#include <iostream>
#include <stack>
using namespace std;

int main()
{
	long long n, m, S1 = 0, S2 = 0 ; 
	cin >> n ; 
	long long H1[1000002], L1[1000002], R1[1000002], H2[1000002], L2[1000002], R2[1000002] ;
	for(int i = 0 ; i < n ; i++) cin >> H1[i] ;
	for(int i = n ; i < m ; i++) cin >> H2[i] ;
	stack <int> st1, st2 ;
	st1.push(-1) ;
	st2.push(-1) ; 
	for(int i = 0 ; i < n ; i++)
	{
		while(st1.size() > 1 && H1[st1.top()] >= H1[i]) st1.pop() ;
		L1[i] = st1.top() + 1 ; 
		st1.push(i) ; 
	} 
	while(!st1.empty())	st1.pop() ; 
	st1.push(n) ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		while(st1.size() > 1 && H1[st1.top()] >= H1[i]) st1.pop() ;
		R1[i] = st1.top() - 1 ;
		st1.push(i) ; 	
	} 
	for(int i = 0 ; i < n ; i++)
	{
		long long tmp = (R1[i] - L1[i] + 1) * H1[i] ;
		S1 = max(S1 , tmp) ;
	}
	for(int i = n ; i < m ; i++)
	{
		while(st2.size() > 1 && H2[st2.top()] >= H2[i]) st2.pop() ;
		L2[i] = st2.top() + 1 ; 
		st2.push(i) ; 
	} 
	while(!st2.empty())	st2.pop() ; 
	st2.push(n) ;
	for(int i = m - 1 ; i >= n ; i--)
	{
		while(st2.size() > 1 && H2[st2.top()] >= H2[i]) st2.pop() ;
		R2[i] = st2.top() - 1 ;
		st2.push(i) ; 	
	} 
	for(int i = 0 ; i < n ; i++)
	{
		long long tmp = (R2[i] - L2[i] + 1) * H2[i] ;
		S2 = max(S2 , tmp) ;
	}
	int res = max(S1, S2) ;
	cout << res << endl ;
	
}

