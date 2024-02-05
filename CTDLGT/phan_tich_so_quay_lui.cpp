#include <iostream>
using namespace std ;

int a[100], n ;

void out(int i)
{
	cout << "(" ;
	for(int j = 1 ; j < i ; j++)
	{
		cout << a[j] << " " ;	
	}	
	cout << a[i] << ") " ;
}

void act(int x, int i, int s){
	for(int j = x ; j >= 1 ; j--){
		a[i] = j ;
		if(j == s) out(i) ;
		else if(j < s) act(j, i + 1, s - j) ;
	}
}

int main(){
	int times ; 
	cin >> times ;
	while(times--){
		cin >> n ;
		act(n, 1, n) ;
		cout << endl ;
	}
}
