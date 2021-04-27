#include <stdio.h>

int lowest(int a, int b) {
    return (a < b) ? a : b;
}

int arr[100001];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= 100000; i++) arr[i] = 999999;

    arr[1] = -1;
    arr[2] = 1;
    arr[3] = -1;
    arr[4] = 2;
    arr[5] = 1;

    for(int i = 6; i <= n; i++) {
        arr[i] = lowest(arr[i], lowest(arr[i - 2] + 1, arr[i - 5] + 1));
        if(arr[i] == 999999) arr[i] = -1;
    }

    for(int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("%d\n", arr[n]);
}