#include <iostream>
using namespace std;

long long power(long long n, long long exponent)
{
	if(exponent == 0) return 1 ;
	long long x = power(n, exponent/2) ;
	if(exponent % 2 == 0) return x*x;
	else return n*x*x ;
}

long long change(string s)
{
	long long res = 0 ;
	for(long long i = 0 ; i < s.length() ; i++)
	{
		if(s[i] != '0') res += power(2, s.length() - i - 1) ;
		//cout << tmp << " " << s.length() - i - 1 << " " << res << endl; 
	}
	return res ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string a, b ;
		cin >> a >> b ;
		long long n1, n2 ; 
		n1 = change(a) ;
		n2 = change(b) ;
		cout << n1*n2 << endl;
	}
}

