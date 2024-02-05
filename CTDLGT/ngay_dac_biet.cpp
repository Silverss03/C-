#include <bits/stdc++.h>
using namespace std ;

vector<string> vec ;
string date(8,'0') ;

void out(){
    int d = stoi(date.substr(0, 2));
    int m = stoi(date.substr(2, 2));
    int y = stoi(date.substr(4));
    if (d > 0 && d <= 31 && m > 0 && m <= 12 && y >= 2000 ) {
        string tmp = date;
        tmp.insert(2, 1, '/');
        tmp.insert(5, 1, '/');
        vec.push_back(tmp);
    }
}

void Try(int i){
	for(int j = 0 ; j <= 2 ; j += 2){
		if(j == 0) date[i] = '0' ;
		else date[i] = '2' ;
		if(i == 7) out() ;
		else Try(i + 1) ;
	}
}

int main(){
	Try(0) ;
	sort(vec.begin(), vec.end()) ;	
	for(auto x : vec) cout << x << endl ;
	
}
