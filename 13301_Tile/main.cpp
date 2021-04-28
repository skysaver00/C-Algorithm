#include <stdio.h>
long long arr[85];

int main() {
    int n;
    scanf("%d", &n);
    arr[1] = 1;
    arr[2] = 1;

    for(int i = 3; i <= n + 1; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    long long value = 2 * arr[n] + 2 * arr[n + 1];
    printf("%lld\n", value);

    return 0;
}