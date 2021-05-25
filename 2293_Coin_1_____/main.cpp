#include <cstdio>
int coin[101];
int dp[10001];

int main () {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(j == coin[i]) dp[j] += 1;
            else if(j - coin[i] < 0) continue;
            else dp[j] += dp[j - coin[i]];
        }
    }

    printf("%d\n", dp[k]);

    return 0;
}