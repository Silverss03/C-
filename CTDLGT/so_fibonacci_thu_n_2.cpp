#include <iostream>
using namespace std;

int modulo = 1e9 + 7 ;

int Fib(int i)
{
	if(i == 0) return 0 ;
	else if(i == 1) return 1 ;
	else
	{
		int a = Fib(i - 1) % modulo;
		int b = Fib(i - 2) % modulo;
		return a + b ;
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ;
		cin >> n ; 
		cout << Fib(n) << endl ; ;
	}
}

