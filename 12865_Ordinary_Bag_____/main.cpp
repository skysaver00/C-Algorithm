#include <stdio.h>
int dp[101][100001];
int val[1001];
int wei[1001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++) scanf("%d %d", &wei[i], &val[i]);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(j - wei[i] >= 0) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wei[i]] + val[i]);
            else dp[i][j] = dp[i - 1][j];
        }
        for(int j = 1; j <= k; j++) {
            printf("%d ", dp[i][j]);
        }printf("\n");
    }

    printf("%d\n", dp[n][k]);
    return 0;
}