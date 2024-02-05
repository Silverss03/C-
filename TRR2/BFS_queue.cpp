#include <iostream>
#include <queue>
using namespace std ;

int n, arr[100][100], check[100], s ;

void BFS_stack(int i){
    queue<int> qu ;
    qu.push(i) ;
    check[i] = 1 ;
    cout << i << " " ;
    while(!qu.empty()){
        int tmp = qu.front() ;
        qu.pop() ;
        for(int j = 1 ; j <= n ; j++){
            if(arr[tmp][j] == 1 && check[j] == 0){
                cout << j << " " ;
                qu.push(j) ;
                check[j] = 1 ;
            }
        }
    }
}
int main(){
    cin >> n >> s; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++ ) cin >> arr[i][j] ;
    }
    BFS_stack(s) ;
}
