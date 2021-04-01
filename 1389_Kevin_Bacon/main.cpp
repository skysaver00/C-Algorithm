#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[101];
queue<int> bfs;
int check[101];
int depth[101];

void startBFS(int a) {
    bfs.push(a);
    check[a] = true;

    while(!bfs.empty()) {
        int next = bfs.front();
        bfs.pop();

        for(int i = 0; i < graph[next].size(); i++) {
            int y = graph[next][i];

            if(check[y] == 0) {
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

    int min = 99999999;
    int minPerson = 0;
    for(int i = n; i >= 1; i--) {
        startBFS(i);

        int sum = 0;
        for(int j = 0; j <= n; j++) {
            sum += depth[j];
            //printf("%d ", depth[j]);
            depth[j] = 0;
            check[j] = 0;
        }if(sum <= min) {
            min = sum;
            minPerson = i;
        }
        //printf("\n");
    }
    printf("%d\n", minPerson);

    return 0;
}