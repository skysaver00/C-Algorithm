#include <iostream>
#include <vector> //DFS, Graph
#include <queue> //BFS
using namespace std;

int check[1001];
vector<int> graph[1001];
queue<int> bfs;

int count[1001];

void startDFS(int i) {

}

void startBFS(int i) {
    bfs.push(i);
    check[i] = 1;
    cout << "Number " << i << "\n";

    while(!bfs.empty()) {
        int x = bfs.front();
        bfs.pop();

        for(int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];

            if(check[y] != 1) {
                cout << "pushing " << y << "\n";
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

    for(int i = 1; i <= N; i++) {
        startBFS(i);

        for(int j = 1; j <= N; j++) {
            cout << check[j] << " ";
        }cout << "\n";

        for(int j = 1; j <= N; j++) {
            if(check[j] == 1) {
                count[j]++;
                check[j] = 0;
            }
        }
    }

    for(int i = 1; i <= N; i++) {
        cout << count[i] << " ";
    }cout << "\n";

    return 0;
}