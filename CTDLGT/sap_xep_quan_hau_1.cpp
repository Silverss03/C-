#include <bits/stdc++.h>
using namespace std ;

int arr[101], n, res = 0, m_cross[21], s_cross[21] ;
void Try(int i){
	for(int j = 1 ; j <= n ; j++){
		if(arr[j] == 0 && m_cross[i - j + n] == 0 && s_cross[i + j - 1] == 0){
			arr[j] = 1 ;
			m_cross[i - j + n] = 1 ;
			s_cross[i + j - 1] = 1 ;
			if(i == n) res++ ;
			else Try(i + 1) ;
			arr[j] = 0 ;
			m_cross[i - j + n] = 0 ;
			s_cross[i + j - 1] = 0 ;
		}
	}
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		res = 0 ;
		cin >> n ;	
		Try(1) ;
		cout << res << endl ;	
	}
}
