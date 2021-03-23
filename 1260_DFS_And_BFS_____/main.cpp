#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

queue<int> bfs;
int checkBFS[1001];
int checkDFS[1001];
vector<int> graph[1001];

void startBFS(int start) {
    bfs.push(start);
    checkBFS[start] = 1;

    while(!bfs.empty()) {
        int x = bfs.front();
        bfs.pop();
        printf("%d ", x);

        for(int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];

            if(!checkBFS[y]) {
                bfs.push(y);
                checkBFS[y] = true;
            }
        }
    }
}

void startDFS(int start) {
    if(checkDFS[start] == 1) return;
    checkDFS[start] = 1;

    printf("%d ", start);

    for(int i = 0; i < graph[start].size(); i++) {
        int y = graph[start][i];
        startDFS(y);
    }
}


int main() {
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);

    for(int i = 0; i < M; i++) {
        int from, to;
        scanf("%d %d", &from, &to);

        graph[from].push_back(to); //벡터 graph[from]에서 to라는 값을 맨 뒤에 추가한다는 뜻.
        graph[to].push_back(from); //양방향이니까 둘다 연결해주기 위함이다!
    }

    for(int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    startDFS(V);
    printf("\n");
    startBFS(V);
    printf("\n");

    return 0;
}