#include <stdio.h>

int arr[500][500];
int brr[500][500];

int choice(int i, int j) {
    if(brr[i - 1][j - 1] >= brr[i - 1][j]) {
        brr[i][j] = brr[i - 1][j - 1] + arr[i][j];
    }
    else {
        brr[i][j] = brr[i - 1][j] + arr[i][j];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                if(j == 0) brr[i][j] = brr[i - 1][j] + arr[i][j];
                else brr[i][j] = brr[i - 1][j - 1] + arr[i][j];
            }
            else {
                choice(i, j);
            }
        }
    }

    int max = -99999999;
    for(int i = 0; i < n; i++) {
        if(max >= arr[n - 1][i]) max = arr[n - 1][i];
    }

    printf("%d\n", max);

    return 0;
}