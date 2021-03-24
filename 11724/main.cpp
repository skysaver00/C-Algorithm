#include <iostream>
#include <vector> //DFS, Graph
#include <queue> //BFS
using namespace std;

int check[1001];
vector<int> graph[1001];
queue<int> bfs;

void startDFS(int i) {
    if(check[i] == 1) return;
    check[i] = 1;

    for(int j = 0; j < graph[i].size(); j++) {
        int y = graph[i][j];

        startDFS(y);
    }
}

void startBFS(int i) {
    bfs.push(i);
    check[i] = 1;

    while(!bfs.empty()) {
        int x = bfs.front();
        bfs.pop();

        for(int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];

            if(check[y] != 1) {
                bfs.push(y);
                check[y] = 1;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cnt = 1;
    startDFS(1);

    for(int i = 1; i <= N; i++) {

        if(check[i] == 0) {
            cnt++;
            startDFS(i);
        }
    }

    cout << cnt << "\n";

    return 0;
}