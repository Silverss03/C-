#include <bits/stdc++.h>
using namespace std ;

int main(){
	int t ;
	cin >> t ;
	cin.ignore(1) ;
	while(t--){
		string a ;
		getline(cin, a) ;
		int res = 0 ; 
		for(int i = 0 ; i < a.length() ; i++){
			if(a[i]=='\t' || a[i]=='\n' || a[i]==' ') { while(a[i]=='\t' || a[i]=='\n' || a[i]==' '){ i++; } i--; } 
			else{ while(a[i] != '\t' && a[i] != '\n' && a[i] != ' ' && a[i] != '\0'){i++ ;} ++res ;i-- ;
			}
		}
		cout << res << endl ;;
	}
}
