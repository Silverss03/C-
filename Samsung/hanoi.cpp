#include <bits/stdc++.h>
using namespace std;

int num;
char a[1002] ;
vector<string> vt ;

void towerofHN(int n, int des){
	if(n <= 0) return ;
	if(a[n] != des){
		towerofHN(n - 1, 3 - a[n] - des) ;
		string tmp = "" ;
		tmp = tmp + (char)(a[n] + 'A') + (char)(des + 'A') ;
		vt.push_back(tmp) ;
		a[n] = des ;
	}
	towerofHN(n - 1, des) ;
}

int main()
{
	cin >> num ;
	for(int i = 1 ; i <= num ; i++){
		char tmp ;
		cin >> tmp ;
		if(tmp == 'A') a[i] = 0 ;
		else if(tmp == 'B') a[i] = 1 ;
		else a[i] = 2; 
	}
	towerofHN(num, 2) ;
	cout << vt.size() << endl ;
	for(auto x : vt){
		cout << x << endl ;
	}
}

