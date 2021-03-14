#include <stdio.h>
short arr[301];
int dp[301];

int Max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }

    dp[0] = arr[0];
    dp[1] = Max(arr[0] + arr[1], arr[1]);
    dp[2] = Max(arr[0] + arr[2], arr[1] + arr[2]);

    for(int i = 3; i < t; i++) {
        int max = Max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
        dp[i] = max;
    }

    printf("%d\n", dp[t - 1]);

    return 0;
}