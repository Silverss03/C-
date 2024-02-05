#include <iostream>
#include <cstring>
#include <vector>
#include <set>
#include <queue>
#include <bitset>
using namespace std;

int n, m, k;
int arr[102][102];
bitset<10002> List[10002];
vector<pair<int, int>> vt;
vector<int> sheep_location;
set<pair<int, int>> st;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void BFS(int start, vector<int>& dist) {
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 1; v <= n * n; v++) {
            if (List[u][v] && dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    memset(arr, 0, sizeof(arr));
    cin >> n >> m >> k;

    int tmp = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            tmp++;
            arr[i][j] = tmp;
        }
    }

    for (int i = 1; i <= m; i++) {
        int x, y, u, v;
        cin >> x >> y >> u >> v;
        pair<int, int> tmp = {arr[x][y], arr[u][v]};
        vt.push_back(tmp);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 0; k < 4; k++) {
                if (arr[i + dx[k]][j + dy[k]] != 0 && arr[i][j] < arr[i + dx[k]][j + dy[k]]) {
                    List[arr[i][j]][arr[i + dx[k]][j + dy[k]]] = 1;
                    List[arr[i + dx[k]][j + dy[k]]][arr[i][j]] = 1;
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        sheep_location.push_back(arr[x][y]);
    }

    vector<vector<int>> sheep_distance(k + 1, vector<int>(k + 1, -1));
    for (int i = 1; i <= k; i++) {
        BFS(sheep_location[i - 1], sheep_distance[i]);
    }

    int ans = 0;
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (sheep_distance[i + 1][j + 1] == -1) {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}

