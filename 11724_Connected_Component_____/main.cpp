#include <iostream>
#include <vector>

using namespace std;
int check[1001];
vector<int> graph[1001];
bool flag = false;
int cnt = 1;

void startDFS(int start) {
    if(check[start] != 0) return;
    flag = true;
    check[start] = cnt;

    for(int i = 0; i < graph[start].size(); i++) {
        int y = graph[start][i];

        if(check[y] == 0) {
            startDFS(y);
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
        startDFS(i);
        if(flag) {
            cnt++;
            flag = false;
        }
    }

    int max = 0;
    for(int i = 1; i <= N; i++) {
        if(check[i] > max) max = check[i];
    }

    printf("%d\n", max);
}