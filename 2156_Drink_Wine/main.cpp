#include <stdio.h>
int arr[10001];
int sum[10001];

int max(int i , int j) {
    return i > j ? i : j;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; i++) {
        scanf("%d", &arr[i]);
    }

    sum[0] = arr[0];
    sum[1] = arr[0] + arr[1];

    sum[2] = max(sum[0] + arr[2], 0 + arr[1] + arr[2]);
    sum[2] = max(sum[2], sum[1]);

    for(int i = 3; i < n; i++) {
        sum[i] = max(sum[i - 2] + arr[i], sum[i - 3] + arr[i - 1] + arr[i]);
        sum[i] = max(sum[i - 1], sum[i]);
    }

    int big = 0;
    for(int i = 0; i < n; i++) {
        big = max(big, sum[i]);
    }
    printf("%d\n", big);

    return 0;
}