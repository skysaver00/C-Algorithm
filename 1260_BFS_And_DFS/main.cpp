#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
queue<int> que;
bool check[1001];

void startDFS(int v) {
    if(check[v]) return;
    cout << v << " ";
    check[v] = true;

    int len = graph[v].size();
    for(int i = 0; i < len; i++) {
        startDFS(graph[v][i]);
    }
}

void startBFS(int n, int v) {
    que.push(v);
    check[v] = true;

    while(!que.empty()) {
        int now = que.front();
        int len = graph[now].size();
        cout << now << " ";
        que.pop();

        for(int i = 0; i < len; i++) {
            if(check[graph[now][i]]) continue;
            else {
                que.push(graph[now][i]);
                check[graph[now][i]] = true;
            }
        }
    }
}

int main() {
    int n, m, v; cin >> n >> m >> v;

    for(int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for(int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());

    startDFS(v);
    for(int i = 1; i <= n; i++) check[i] = false;
    cout << "\n";
    startBFS(n, v);

    return 0;
}