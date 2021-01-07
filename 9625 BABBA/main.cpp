#include <stdio.h>

int main() {
    int arr[50][2];
    arr[0][0] = 0, arr[0][1] = 1, arr[1][0] = 1, arr[1][1] = 1;

    int t;
    scanf("%d", &t);

    for(int i = 2; i < t; i++) {
        arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
        arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
    }

    printf("%d %d\n", arr[t - 1][0], arr[t - 1][1]);
}