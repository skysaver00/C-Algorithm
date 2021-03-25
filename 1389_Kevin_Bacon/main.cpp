#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[101];
queue<int> bfs;
bool check[101];
int depth[101];

void startBFS(int a) {
    bfs.push(a);
    check[a] = 1;

    while(!bfs.empty()) {
        int next = bfs.front();
        bfs.pop();

        for(int i = 0; i < graph[next].size(); i++) {
            int y = graph[next][i];

            if(check[y]) {
                depth[y] = depth[next] + 1;
                check[y] = 1;
                bfs.push(y);
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= m; i++) {
        startBFS(i);

        for(int j = 1; j <= m; j++) {
            printf("%d ", depth[j]);
            depth[j] = 0;
        }printf("\n");
    }

    return 0;
}