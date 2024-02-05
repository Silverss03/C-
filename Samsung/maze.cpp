#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0} ;
int dy[4] = {0, 1, 0, -1} ;
int check[3002][3002], connected = 0 ;
int n, vertex = 0, cnt = 0 ;
int arr[3002][3002] ;
bool ok = false;
vector<int> Lists[3002] ;

void DFS(int i, int j, int x, int y) {
	check[i][j] = 1 ;
	if(ok) return ;
	for(int h = 0 ; h < 4 ; h++){
		int u = i + dx[h] ;
		int v = j + dy[h] ;
		if((u == x) && (v == y)) continue ;
		if(check[u][v]){
			ok = true ;
			return ;
		} 
		else if(u >= 1 && u <= n && v >= 1 && v <= n && check[u][v] == 0 && arr[u][v] == 0){
			DFS(u,v,i,j) ;
		}
	}
}

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char c;
            cin >> c;
            arr[i][j]= c-'0';
        } 
    }    
    for(int i = 1 ; i <= n ; i++){
    	for(int j = 1 ; j <= n ; j++){
    		if(check[i][j] == 0 && arr[i][j] == 0){
    			DFS(i,j,0,j) ;
    			cnt++ ;
			}
		}
	}
	if(ok || cnt > 1){
		cout << "No" ;
	}
	else{
		cout << "Yes" ;
	}
    return 0;
}

