#include <stdio.h>
char arr[1001][1001];
int real[1001][2];

void solve() {

}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%s", arr[i]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            real[i][j] = arr[i][j] - 0x30;
            printf("%d ", real[i][j]);
        }
    }
    solve();

    return 0;
}