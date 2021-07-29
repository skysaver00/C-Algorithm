#include <stdio.h>
int arr[40][2];

int main() {
    int t; scanf("%d", &t);
    arr[0][0] = 1;
    arr[1][1] = 1;
    for(int i = 2; i <= 40; i++) {
        arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
        arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
    }

    while(t--) {
        int n; scanf("%d", &n);
        printf("%d %d\n", arr[n][0], arr[n][1]);
    }
}