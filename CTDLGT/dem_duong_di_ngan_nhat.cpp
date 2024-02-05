#include <bits/stdc++.h>
using namespace std;

constexpr long long INF = LLONG_MAX;
const int MAXN = 10000005;

long long n, m, start, d[MAXN], c[MAXN];
vector<pair<long long, long long>> List[MAXN];
priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> qu;

void Dijkstra(long long start) {
    for (long long i = 1; i <= n; i++) {
        d[i] = INF;
        c[i] = 0;
    }

    d[start] = 0;
    c[start] = 1;
    while (qu.size()) qu.pop();
    qu.emplace(0, start);

    while (qu.size()) {
        long long u = qu.top().second;
        qu.pop();
        for (auto edge : List[u]) {
            long long v = edge.second;
            long long distance = edge.first;
            if (d[u] + distance < d[v]) {
                c[v] = c[u];
                d[v] = d[u] + distance;
                qu.emplace(d[v], v);
            } else if (d[u] + distance == d[v]) {
                c[v] += c[u];
            }
        }
    }
}

int main() {
    start = 1;
    cin >> n >> m;
    for (long long i = 1; i <= m; i++) {
        long long u, v, w;
        cin >> u >> v >> w;
        List[u].emplace_back(w, v);
        List[v].emplace_back(w, u);
    }

    Dijkstra(start);

    cout << d[n] << " " << c[n] << endl;
}

