#include <stdio.h>
int arr[10][101];

int main() {
    for(int i = 1; i <= 9; i++) arr[i][0] = 1;

    int n;
    scanf("%d", &n);

    for(int tr = 1; tr < n; tr++) {
        for(int i = 0; i <= 9; i++) {
            if(i == 0) {
                arr[i + 1][tr] += arr[i][tr - 1];
            } else if(i == 9) {
                arr[i - 1][tr] += arr[i][tr - 1];
            } else {
                arr[i + 1][tr] += arr[i][tr - 1];
                arr[i - 1][tr] += arr[i][tr - 1];
            }
        }

        for(int i = 0; i <= 9; i++) {
            arr[i][tr] %= 1000000000;
        }
    }

    int sum = 0;
    for(int i = 0; i <= 9; i++) {
        sum += arr[i][n - 1];
    }

    printf("%d\n", sum % 1000000000);
}