#include <iostream>
#include <vector>
using namespace std;

void act(long long a, long long b)
{
	while(1)
	{
		if(b % a == 0)
		{
			cout << 1 << "/" << b/a << " " ;
			return ;
		}
		long long tmp = b/a + 1 ;
		cout << 1 << "/" << tmp << " + " ;
		a = a*tmp - b ;
		b *= tmp ;	
	}

}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int a, b ;
		cin >> a >> b;
		act(a,b) ;
		cout << endl;
	}
}

