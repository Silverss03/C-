#include <bits/stdc++.h>
using namespace std;

long long f[50], res;

void fibo()
{
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 45; i++)
		f[i] = f[i - 2] + f[i - 1];
}

void solve(int n, long long k)
{
	if(n == 0)
	{
		return;
	}
	if(n == 1)
	{
		res += 1;
		return;
	}
	if(k <= f[n - 1])
	{
		return solve(n - 1,k);
	}
	else
	{
		if(n > 3)
		{
			res += f[n - 1 - 1];
		}
		return solve(n - 2, k - f[n - 1]);
	}
}

main()
{
	fibo();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long k;
		res = 0;
		cin >> n >> k;
		solve(n,k);
		cout << res << endl;
	}
}
