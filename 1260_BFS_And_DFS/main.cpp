#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
queue<int> que;
bool check[1001];

void startDFS(int v) {

}

void startBFS(int n, int v) {
    que.push(v);
    check[v] = 1;

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

    for(int i = 0; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());

    /*for(int i = 1; i <= n; i++) {
        for(int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }cout << "\n";
    }*/

    startDFS(v);
    startBFS(n, v);

    return 0;
}