#include <iostream>
using namespace std;
int arr[50];
int res[50];
bool visit[50];

void dfs(int left, int cnt, int max, int size, int now) {
    if(cnt == max) {
        for(int i = 0; i < cnt; i++) {
            cout << res[i] << " ";
        }cout << "\n";
        return;
    }

    for(int i = left; i < size; i++) {
        if(visit[i]) continue;
        visit[i] = true;
        res[cnt] = arr[i];
        cout << "now is: " << now << "\n";
        dfs(left, cnt + 1, max, size, now + 1);
        visit[i] = false;
    }
    left++;
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) arr[i] = i + 1;

    dfs(0, 0, m, n, 1);
    return 0;
}
