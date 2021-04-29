#include <stdio.h>
#include <math.h>
int arr[50001][2];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = sqrt(n); i >= 1; i--) {
        
    }

    for(int i = sqrt(n); i >= 1; i--) {
        for(int j = 1; i * j <= n; j++) {
            if(arr[i * i * j][1] + (i * i * j) > n) continue;
            if(arr[i * i * j][1] == n) continue;
            arr[i * i * j][0] += j;
            arr[i * i * j][1] += i * i * j;

            for(int l = 1; l <= n; l++) {
                printf("%d ", arr[l][0]);
            }printf("\n");

            for(int l = 1; l <= n; l++) {
                printf("%d ", arr[l][1]);
            }printf("\n");
        }
    }

    for(int i = 1; i <= n; i++) {
        printf("%d ", arr[i][0]);
    }printf("\n");

    for(int i = 1; i <= n; i++) {
        printf("%d ", arr[i][1]);
    }



    return 0;
}