#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string a, b ;
	cin >> a >> b ;
	int min = 0, max = 0, l1 = a.length() , l2 = b.length()  ;
	for(int i = 0 ; i < l1 ; i++) if(a[i] == '6') a[i] = '5' ;
	for(int i = 0 ; i < l1 ; i++) if(b[i] == '6') b[i] = '5' ;
	min = stoi(a) + stoi(b) ;
	for(int i = 0 ; i < l1 ; i++) if(a[i] == '5') a[i] = '6' ;
	for(int i = 0 ; i < l1 ; i++) if(b[i] == '5') b[i] = '6' ;
	max = stoi(a) + stoi(b) ;
	cout << min << " " << max << endl ;
}

