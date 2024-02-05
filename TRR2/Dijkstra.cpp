#include <iostream>
#include <vector>
#include <queue> 
#include <algorithm>
using namespace std;

struct graph
{
    int start, end, val;
};

int n, start;
vector<graph> arr;
int label[100], check[100], path[100];

void Dijkstra(int s)
{
    int times = n;
    label[s] = 0;
    check[s] = 1;
    times--;
    int size = arr.size();

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        check[u] = 1;
        times--;

        for (int j = 0; j < size; j++)
        {
            if (check[arr[j].end] == 0 && arr[j].start == u)
            {
                if (label[arr[j].end] > label[u] + arr[j].val)
                {
                    label[arr[j].end] = label[u] + arr[j].val;
                    path[arr[j].end] = u;
                    pq.push({label[arr[j].end], arr[j].end});
                }
            }
        }
    }
}

int main()
{
    cin >> n >> start;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int tmp;
            cin >> tmp;
            if (tmp != 0)
            {
                graph a;
                a.start = i;
                a.end = j;
                a.val = tmp;
                arr.push_back(a);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        label[i] = 10e8;
    }

    Dijkstra(start);

    for (int i = 1; i <= n; i++)
    {
        cout << "K/c " << start << " -> " << i << " = ";
        if (label[i] != 10e8)
        {
            cout << label[i] << ";" << "        ";
            if (i == start)
            {
                cout << i << " <- " << start << endl;
            }
            else
            {
                vector<int> res;
                int tmp = i;

                while (tmp != start)
                {
                    res.push_back(tmp);
                    tmp = path[tmp];
                }

                for (auto x : res)
                {
                    cout << x << " <- ";
                }

                cout << start << endl;
            }
        }
        else
            cout << "INF;" << endl;
    }
}

