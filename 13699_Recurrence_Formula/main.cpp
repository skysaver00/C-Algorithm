#include <stdio.h>
long long arr[40];

int main() {
    int n;
    scanf("%d", &n);

    arr[0] = 1;

    for(int i = 1; i <= n; i++) {
        arr[i] = 1;
        for(int j = 0; j <= i; j++) {
            arr[i] *= arr[j] * arr[i - j];
        }

        printf("%d\n", arr[i]);
    }

    return 0;
}