#include <iostream>
using namespace std;
int arr[50];
int res[50];
int visit[50];

void dfs(int cnt, int max, int sz) {
    if(cnt == max) {
        for(int i = 0; i < max; i++) { //찾으려는 개수 도달
            cout << res[i] << " ";
        }cout << "\n";

        return;
    }

    for(int i = 0; i < sz; i++) {
        if(visit[i] == true) continue; //이미 방문했다면 패스!
        visit[i] = true;
        res[cnt] = arr[i];
        dfs(cnt + 1, max, sz);
        res[cnt] = 0;
        visit[i] = false;
    }
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    dfs(0, m, n);
}
