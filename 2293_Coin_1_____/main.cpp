#include <cstdio>
int coin[101];
int dp[10001];

int main () {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
        dp[coin[i]] = 1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            
        }
    }

    for(int i = 1; i <= k; i++) {
        for(int j = 0; j < n; j++) {
            if(i - coin[j] < 0);
            else {
                dp[i] += dp[i - coin[j]];
            }
        }

        for(int j = 1; j <= k; j++) {
            printf("%d ", dp[j]);
        }printf("\n");
    }

    return 0;
}