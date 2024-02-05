#include <bits/stdc++.h>
using namespace std ;

int num ;
vector<string> ans ;
int arr[12][12] ;

void Try(int r, int c,int matrix[][12], string res ){
	if(r == num - 1 && c == num - 1){
		ans.push_back(res) ;
		return ;
	}
	if(r < num - 1 && matrix[r + 1][c]) Try(r + 1, c, matrix, res + "D") ;
	if(c < num - 1 && matrix[r][c+1]) Try(r, c + 1, matrix, res + "R") ; 
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		ans.clear();
		cin >> num ;
		vector<vector<int>> matrix ;
		for(int i = 0 ; i < num ; i++){
			for(int j = 0 ; j < num ; j++) cin >> arr[i][j] ;
		}
		if(arr[0][0] == 0 || arr[num - 1][num - 1] == 0){
			cout << "-1\n" ;
		}
		else{
			Try(0,0,arr, "") ; 
			if (ans.empty()) cout << "-1\n";
			else{
				sort(ans.begin(), ans.end()) ;
				for(auto x : ans) cout << x << " " ;
				cout << endl ;
			}
		}
	}
}
