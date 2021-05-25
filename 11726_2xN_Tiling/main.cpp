#include <stdio.h>
long long arr[1001];

int main() {
    int n;
    scanf("%d", &n);
    arr[1] = 1;
    arr[2] = 2;

    for(int i = 3; i <= n; i++) arr[i] = (arr[i - 2] + arr[i - 1]) % 10007;

    printf("%lld\n", arr[n]);
    return 0;
}