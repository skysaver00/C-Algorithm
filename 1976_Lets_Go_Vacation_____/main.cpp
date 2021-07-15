#include <iostream>
#include <queue>
using namespace std;
int map[201][201];
int travel[1001];
queue<int> que;

bool bfs(int i, int j, int node) {
    que.push(i);

    while(!que.empty()) {
        int now = que.front();
        que.pop();
        for(int a = 1; a <= node; a++) {
            if(map[now][a] == 1 && a == j) {
                return true;
            }
            if(map[now][a] == 1) {
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
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}