#include <cstdio>

int mem[101];
int off[101];

int dp[101][2];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", &mem[i]);
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &off[i]);
    }

    for(int i = 0; i <= 10000; i++) {
        for(int j = 0; j < 100; j++) {
            for(int k = 0; k <= j; k++) {
                if(dp[k][1] + off[j] <= i) {
                    dp[j][0] = max(dp[k][0] + mem[k], dp[j][0]);
                    if(dp[j][0] == dp[k][0] + mem[k]) dp[k][1]
                }
            }
        }
    }

    return 0;
}