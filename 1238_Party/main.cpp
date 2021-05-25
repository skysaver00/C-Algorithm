#include <cstdio>
int INF = 2147483647;
int point[1001][1001];
bool check[1001];
int dist[1001][1001];

void dijk(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", point[i][j]);
        }printf("\n");
    }

    for(int i = 1; i <= n; i++) {

    }
}

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i != j) point[i][j] = INF;
            else point[i][j] = 0;
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