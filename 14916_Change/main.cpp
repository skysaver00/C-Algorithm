#include <stdio.h>

int lowest(int a, int b) {
    return (a < b) ? a : b;
}

int arr[100001];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= 100000; i++) arr[i] = 999999;

    arr[2] = 1;
    arr[4] = 2;
    arr[5] = 1;

    for(int i = 6; i <= n; i++) {
        arr[i] = lowest(arr[i], lowest(arr[i - 2] + 1, arr[i - 5] + 1));
    }

    if(arr[n] == 999999) {
        printf("-1\n");
        return 0;
    }

    printf("%d\n", arr[n]);
    return 0;
}