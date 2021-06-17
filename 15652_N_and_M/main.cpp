#include <cstdio>
int num[50];
int res[50];

void solve(int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < cnt - 1; i++) {
            if(res[i + 1] < res[i]) return;
        }
        for(int i = 0; i < cnt; i++) {
            printf("%d ", res[i]);
        }printf("\n");
        return;
    }

    for(int i = 0; i < size; i++) {
        res[cnt] = num[i];
        solve(cnt + 1, max, size);
    }
}

int main() {
    int m, n; scanf("%d %d", &m, &n);

    for(int i = 0; i < m; i++) num[i] = i + 1;
    solve(0, n, m);
    return 0;
}