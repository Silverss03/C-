#include <bits/stdc++.h>
using namespace std;

vector<string> vt ;

void towerofHN(int n, char source, char destination, char intermediate){
	if(n == 1){
		string tmp = "" ;
		tmp += source ;
		tmp += destination ;
		vt.push_back(tmp) ;
		vt.push_back(tmp) ;
		return ;
	}
	towerofHN(n - 1, source, intermediate, destination) ; 
	string tmp = "" ;
	tmp += source ;
	tmp += destination ;
	vt.push_back(tmp) ;
	vt.push_back(tmp) ;
	towerofHN(n - 1, intermediate, destination, source) ;
}

int main()
{
	int num ;
	cin >> num ;
	towerofHN(num/2, 'A', 'C', 'B') ;
	cout << vt.size() << endl ; 
	for(auto x :vt){
		cout << x << endl ;
	}
}

