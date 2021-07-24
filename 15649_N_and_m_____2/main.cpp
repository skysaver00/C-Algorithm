#include <iostream>
using namespace std;

int num[10];
int com[10];
int visit[10];

void dfs(int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < max; i++) {
            cout << com[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i < size; i++) {
        if(visit[i]) continue;
        visit[i] = true;
        com[cnt] = num[i];
        dfs(cnt + 1, max, size);
        visit[i] = false;
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) num[i] = i + 1;

    dfs(0, m, n);
    return 0;
}