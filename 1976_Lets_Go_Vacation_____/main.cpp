#include <iostream>
#include <queue>
using namespace std;
int map[201][201];
bool visit[201];
int travel[1001];
queue<int> que;

bool bfs(int i, int j, int node) {
    que.push(i);

    while(!que.empty()) {
        int now = que.front();
        visit[now] = true;

        que.pop();
        for(int a = 1; a <= node; a++) {
            if(map[now][a] == 1 && a == j) {
                return true;
            }
            if(map[now][a] == 1 && !visit[a]) {
                que.push(a);
            }
        }
    }
    return false;
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }

    for(int i = 0; i < m; i++) cin >> travel[i];
    for(int i = 0; i < m - 1; i++) {
        bool check = bfs(travel[i], travel[i + 1], n);
        if(!check) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}