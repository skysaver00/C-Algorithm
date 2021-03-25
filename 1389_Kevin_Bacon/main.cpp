#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int min(int a, int b) {
    if(a < b) return a;
    else return b;
}

vector<int> graph[101];
queue<int> bfs;

int depth[101];

void startBFS(int a) {
    bfs.push(a);

    while(!bfs.empty()) {
        int next = bfs.front();
        bfs.pop();

        for(int i = 0; i < graph[next].size(); i++) {
            int y = graph[next][i];

            depth[y] = min(depth[y] ,depth[next] + 1);
            bfs.push(y);
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

    int min = 99999999;
    int minPerson = 0;
    for(int i = n; i >= 1; i--) {
        startBFS(i);

        int sum = 0;
        for(int j = 1; j <= m; j++) {
            sum += depth[j];
            depth[j] = 0;
            check[j] = 0;
        }if(sum <= min) {
            min = sum;
            minPerson = i;
        }
    }
    printf("%d\n", minPerson);

    return 0;
}