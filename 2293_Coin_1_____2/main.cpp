#include <stdio.h>
int arr[100];
int dp[10001];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    int n, k; scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);


    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
        }
    }
    printf("%d\n", dp[k]);
    return 0;
}