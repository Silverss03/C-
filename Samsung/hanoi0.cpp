#include<bits/stdc++.h>
#define ii pair <int,int>
using namespace std;
vector <ii> sol;
int g[4][4] = {{0,1,0},{0,0,1},{1,0,0}} ;

void hanoi(int n, int a, int b)
{
    if (n >= 1)
    {
        int c = 3 - a - b;
        if (g[a][b])
        {
            hanoi(n - 1, a, c);
            sol.push_back({a,b});
            hanoi(n - 1, c, b);
        }
        else
        {
            hanoi(n - 1,a,b);
            sol.push_back({a, c});
            hanoi(n - 1,b,a);
            sol.push_back({c, b});
            hanoi(n - 1,a,b);
        }
    }
}

int  main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    hanoi(n,0,2);
    for (auto x: sol)
       cout << char('A' + x.first) ;
}
