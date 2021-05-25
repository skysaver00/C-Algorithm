#include <cstdio>
#define INF (unsigned)!((int)0)
int point[1001][1001];

void dijk(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", point[i][j]);
        }printf("\n");
    }
}

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            point[i][j] = INF;
        }
    }

    for(int i = 0; i < m; i++) {
        int from, to, len;
        scanf("%d %d %d", &from, &to, &len);
        point[from][to] = len;
    }

    dijk(n);

    return 0;
}