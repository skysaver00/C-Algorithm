#include <stdio.h>
#include <math.h>
int arr[50001];

int min(int j, int k) {
    return (j < k) ? j : k;
}

int main() {
    int n;
    scanf("%d", &n);

    int i = sqrt(n);
    for(int k = 1; k <= n; k++) {
        arr[k] = 9999;
    }

    for(int k = 1; k <= i; k++) {
        arr[k * k] = 1;
    }

    for(int j = 1; j <= n; ++j) {
        int t = sqrt(j);
        for(int k = 1; k <= t; ++k) {
            arr[j] = min(arr[j], arr[k * k] + arr[j - k * k]);
        }
    }

    printf("%d\n", arr[n]);

    return 0;
}