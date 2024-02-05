#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests ; 
	cin >>  tests;
	while(tests--){
		string inp ;
		cin >> inp ; 
		stack<char> st ;
		for(int i = 0 ; i < inp.length() ; i++){
			if(inp[i] == '(') st.push(inp[i]) ;
			else{
				if(st.size() != 0 && st.top() == '('){
					st.pop() ;
				}
				else{
					st.push(inp[i]) ;
				}
			}
		}
		int d1 = 0, d2 = 0 ; 
		while(st.size() > 0){
			if(st.top() == '('){
				d1++ ;
			}
			else{
				d2++ ;
			}
			st.pop() ;
		}
		int res = d1/2 + d2/2 + d1%2 + d2%2 ;
		cout << res << endl ;
	}
}

