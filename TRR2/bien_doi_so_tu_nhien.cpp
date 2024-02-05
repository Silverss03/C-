#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

queue<int> qu ;

void act(queue<int> qu, int step)
{
	int tmp = qu.front() ; 
	cout << qu.front() << endl ;
	if(tmp == 1) break ;
	step++ ;
	qu.pop() ;
	if((int)(sqrt(tmp)) == (float)(sqrt(tmp))) 
	{
		act(qu.push((int)sqrt(tmp)), step + 1 ;
				} 	
	qu.push(tmp - 1) ; 
}

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		int n, step = 0 ;
		cin >> n ;
		queue<int> qu ;
		qu.push(n) ; 
		while(1)
		{

		}
		cout << step << endl ; 
	}
}

