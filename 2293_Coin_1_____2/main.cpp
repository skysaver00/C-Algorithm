#include <stdio.h>
int arr[100];
int dp[10001];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    for(int i = 0; i <= 10000; i++) dp[i] = 999999;

    int n, k; scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        dp[arr[i]] = 1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            
        }
    }

    for(int i = 0; i <= k; i++) {
        printf("%d ", dp[i]);
    }

    return 0;
}