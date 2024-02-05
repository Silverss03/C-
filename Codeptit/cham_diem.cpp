#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std ;

struct exam {
	int code ;
	string answer ;
};

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		exam inp ;
		cin >> inp.code ;
		int i;
		double res = 0 ; 
		for(i = 0 ; i < 15 ; i++) cin >> inp.answer[i] ;
		exam one, two ;
		one.code = 101 ;
		one.answer = {"ABBADCCABDCCABD"} ;
		two.code = 102 ;
		two.answer = {"ACCABCDDBBCDDBB"} ;
		for(i = 0 ; i < 15 ;i++){
			if(inp.code == one.code){
				if((int)inp.answer[i] == (int)one.answer[i]) res += (double)2/(double)3 ;
			}
			else{
				if((int)inp.answer[i] == (int)two.answer[i]) res += (double)2/(double)3 ;
			}
		}
		cout << fixed << setprecision(2) << res << endl;
	}
}
