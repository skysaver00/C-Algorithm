#include <iostream>
#include <queue>
using namespace std;
int map[201][201];
bool visit[201];
int travel[1001];
queue<int> que;

void bfs(int i, int node) {
    que.push(i);

    while(!que.empty()) {
        int now = que.front();
        visit[now] = true;
        que.pop();

        for(int a = 1; a <= node; a++) {
            if(map[now][a] == 1 && !visit[a]) {
                que.push(a);
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }

    for(int i = 0; i < m; i++) cin >> travel[i];
    bfs(travel[0], n);
    for(int i = 0; i < m; i++) {
        if(visit[travel[i]]) continue;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}