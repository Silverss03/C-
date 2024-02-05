#include <bits/stdc++.h>
using namespace std;

int qhd(int a[], int n, int s)
{
	int F[s + 1] = {0} ; 
	F[0] = 1 ;
	for(int i = 1 ; i <= ; i++)
	{
		for(int j = s ; j >= arr[i] ; j--)
		{
			if(F[j] == 0 && F[j - arr[i]] == 1)	 F[j] = 1;
		}
	}
}
int main()
{
	int n, s, i, t; 
	cin >> t ;
	while(t--)
	{
		
	}
}

