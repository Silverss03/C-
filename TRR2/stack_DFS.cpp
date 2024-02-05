#include <iostream>
#include <stack>
using namespace std ;

int n, arr[100][100], check[100] ;

void DFS(int i){
    stack <int> st ;
    cout << i << " " ;
    check[i] = 1 ;
    st.push(i) ; 
    while(!st.empty()){
        int tmp = st.top() ;
        st.pop() ;
        for(int j = 1; j <= n ; j++){
            if(check[j] == 0 && arr[tmp][j] == 1){
                cout << j << " " ;
                check[j] = 1 ;
                st.push(tmp) ;
                st.push(j) ;
                break ;
                
            }
        }
    }
}
int main(){
    cin >> n ; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
    }
    DFS(1) ;
}
