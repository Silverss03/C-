#include <iostream>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		string s ;
		cin >> s ;
		string t = s.substr(0, 4) ;
		int tmp = stoi(t) ; 
		cout << tmp << endl ;
	}
}

