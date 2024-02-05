#include <iostream>
#include <map>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--){
		int d ;
		string s ;
		cin >> d >> s ; 
		map<char, int> mp ;
		int n = s.length() , k = -1;
		for(int i= 0 ; i < s.length() ; i++){
			s[i] = tolower(s[i]) ;
			mp[s[i]]++ ;
			if(mp[s[i]] > k) k = mp[s[i]] ;
		}
		if(n > d * (k - 1))  cout << 1 << endl ;
		else cout << -1 << endl ;
	}
}

