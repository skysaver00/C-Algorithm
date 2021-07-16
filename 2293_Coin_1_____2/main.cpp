#include <stdio.h>
int arr[100];
int dp[10001];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    int n, k; scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        dp[arr[i]] = 1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j < k; j++) {
            if(j == arr[i]) dp[j] += 1;
            else if(j - arr[i] < 0) continue;
            else dp[j] += dp[j - arr[i]];
        }
    }

    for(int i = 0; i <= k; i++) {
        printf("%d ", dp[i]);
    }

    return 0;
}