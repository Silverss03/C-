#include <iostream>
using namespace std;

bool check(int n, string str){
	int l = 0, r = n - 1 ;
	while(l < r){
		if(str[l] != str[r]) return false ;
		l++ ;
		r-- ;
	}
	return true ;
}

void generateBinaryStrings(int n, string str)
{
    if (n == 0) {
    	int len = str.length() ;
        if(check(len , str)){
        	for(int i = 0 ; i < len ; i++) cout << str[i] << " " ; 
        	cout << endl ;
		}
        return;
    }
    generateBinaryStrings(n-1, str + "0");
    generateBinaryStrings(n-1, str + "1");
}


int main()
{
    int n ;
    cin >> n ;
    generateBinaryStrings(n, "");
    return 0;
}

