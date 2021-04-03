#include <bits/stdc++.h>
using namespace std;

queue<int> bfs;
vector<int> graph[101];

int check[101];

void startBFS(int from) {
    if(check[from] != 0) return;
    check[from] = 1;
    bfs.push(from);

    while(!bfs.empty()) {
        int start = bfs.front();
        bfs.pop();

        for(int i = 0; i < graph[start].size(); i++) {
            int next = graph[start][i];

            if(check[next] == 0) {
                check[next] = check[start] + 1;
                bfs.push(graph[start][i]);
            }
        }
    }

}

int main() {
    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    startBFS(x);

    cout << check[y] - 1;

    return 0;
}