#include <stdio.h>
int arr[10001];
int dp[10001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n ; i++) scanf("%d", &arr[i]);
    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];

    for(int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 1] + arr[i])
    }

    return 0;
}