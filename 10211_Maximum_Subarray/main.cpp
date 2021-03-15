#include <stdio.h>
int arr[1001];
int dp[1001];

int max(int a, int b){
    return a > b ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);

        for(int j = 0; j < t; j++) {
            scanf("%d", &arr[j]);
            if(j == 0) dp[0] = arr[0];
            else {
                dp[j] = max(dp[j - 1] + arr[j], arr[j]);
            }
        }

        int max = dp[0];
        for(int j = 0; j < t; j++) {
            if(max < dp[j]) max = dp[j];
        }

        printf("%d\n", max);
    }

    return 0;
}