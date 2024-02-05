#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int v, e, ans;
int parent[1002], size[1002];

struct DSU {
    void make_set(int v)
    {
        parent[v] = v;
        size[v] = 1;
    }

    int find(int v)
    {
        if (parent[v] == v) return v;
        return parent[v] = find(parent[v]);
    }

    void join(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a != b)
        {
            if (size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
        else
        {
            ans = 1;
        }
    }
};

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        ans = 0;
        cin >> v >> e;

        DSU node;
        for (int i = 1; i <= v; i++)
        {
            node.make_set(i);
        }

        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            node.join(x, y);
        }
		
        if (ans == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}

