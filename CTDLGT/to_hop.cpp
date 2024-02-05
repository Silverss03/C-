#include <iostream>
#include <cstring>
#include <set>
using namespace std;

long long n, k, arr[22], comb[22] ;
string s ; 
set<long long> st ;

void act(long long i)
{
	for(long long j = comb[i - 1] + 1 ; j <= n - k + i; j++)
	{
		comb[i] = j ; 
		if(i == k)
		{
			long long tmp = 0 ;
			for(long long l = 1 ; l <= k ; l++)
			{
				tmp = tmp * 10 + arr[comb[l] - 1] ;
			}
			res.insert(tmp) ;
		}
		else act(i + 1) ;
	}
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		res.clear() ;
		memset(comb, 0, sizeof(comb)) ;
		cin >> s >> k ; 
		n = s.length() ;
		for(long long i = 0 ; i < n ; i++)
		{
			st.insert(s[i] - '0');
		}
		act(1) ;
		for(auto x : res)
		{
			cout << x << endl ;
		}
	}
}

