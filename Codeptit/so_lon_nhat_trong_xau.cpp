#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    getline(cin, s) ;
    string max = "" ;
    for(long long i = 0 ; i < s.length() ; i++){
        int c = 0 ;
		string tmp = "" ;
        if(s[i] == '0' && (s[i + 1] < '0' || s[i + 1] > '9')){
        	tmp += s[i] ;
        	i++ ;
		}
		else{
			while(s[i] == '0') i++ ;
			if(s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9'){
	            c = 1 ;
	            i++ ;
	        }
			while(s[i] >= '0' && s[i] <= '9'){
                tmp += s[i] ;
                i++ ;
            }
		}
        if(c == 1) tmp.insert(0, "-") ;
        if(tmp[0] != '-'){
            if(max[0] == '-') max = tmp ;
            else{
            	if(tmp.length() > max.length()) max = tmp ;
                else if(tmp.length() == max.length()){
                    if(tmp > max) max = tmp ;
                }
			}
        }
        else{
        	if(max.length() == 0) max = tmp ;
        	else{
        		if(max[0] == '-'){
        			if(tmp.length() < max.length()) max = tmp ;
        			else if(tmp.length() == max.length()){
        				if(tmp < max) max = tmp ;
					}
				}
			}
		}
    }
    cout << max  ;
}
