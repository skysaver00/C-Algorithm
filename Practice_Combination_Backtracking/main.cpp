#include <iostream>
using namespace std;
int number[50];
bool visit[50];

void dfs(int idx, int cnt, int max, int size, int level) {
    if(cnt == max) {
        for(int i = 0; i < size; i++) {
            if(visit[i]) cout << number[i] << " ";
        }cout << "\n";
        return;
    }

    for(int i = idx; i < size; i++) {
        if(visit[i]) continue;
        visit[i] = true;
        dfs(i, cnt + 1, max, size, level);
        visit[i] = false;
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) number[i] = i + 1;
    dfs(0, 0, m, n, 0);

    return 0;
}