#include <stdio.h>
long long arr[70];

int main() {
    int t;
    scanf("%d", &t);

    arr[0] = 1, arr[1] = 1, arr[2] = 2, arr[3] = 4;
    for(int i = 4; i <= 67; i++) arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];

    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", arr[n]);
    }
    return 0;
}