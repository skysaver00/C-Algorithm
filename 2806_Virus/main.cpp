#include <iostream>
#include <vector>

using namespace std;

int check[101];
int cnt[101];
vector<int> graph[101];

void startDFS(int s) {
    if(check[s] == 1) return;
    check[s] = 1;

    for(int i = 0; i < graph[s].size(); i++) {
        int y = graph[s][i];
        if(check[y] == 0) {
            cnt[y] = 1;
            startDFS(y);
        }
    }
}

int main() {
    int N;
    cin >> N;

    int connect;
    cin >> connect;

    while(connect--) {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    startDFS(1);

    int count = 0;
    for(int i = 1; i <= N; i++) if(cnt[i] == 1) count++;
    printf("%d\n", count);

    return 0;
}