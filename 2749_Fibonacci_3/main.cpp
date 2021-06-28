#include <stdio.h>

int arr[100][6][6];
int count[100];
int brr[100][6][6];

int main() {
    int a = 2;
    long long b;
    scanf("%lld", &b);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf("%d", &arr[0][i][j]);
        }
    }

    long long num = b;
    int cnt = 0;
    while (1) {
        if (num == 0) {
            break;
        }
        else {
            cnt++;
            num /= 2;
            printf("%d %d\n", cnt, num);
        }
    }
    for (int i = 0; i < cnt; i++) {
        if (b % 2 == 1) {
            count[i] = 1;
            b /= 2;
        }
        else {
            count[i] = 0;
            b /= 2;
        }
    }

    for (int i = 1; i < 64; i++) {
        for (int j = 0; j < a; j++) {
            for (int k = 0; k < a; k++) {
                for (int m = 0; m < a; m++) {
                    arr[i][j][k] += arr[i - 1][j][m] * arr[i - 1][m][k];
                }
                arr[i][j][k] %= 1000;
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == j) {
                brr[0][i][j] = 1;
            }
            else brr[0][i][j] = 0;
        }
    }

    int ei = 1;

    for (int i = 0; i < cnt; i++) {
        if (count[i] == 1) {
            for (int j = 0; j < a; j++) {
                for (int k = 0; k < a; k++) {
                    for (int m = 0; m < a; m++) {
                        brr[ei][j][k] += brr[ei - 1][j][m] * arr[i][m][k];
                    }
                    brr[ei][j][k] %= 1000;
                }
            }
            ei++;
        }
        else continue;
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", brr[ei - 1][i][j]);
        }
        printf("\n");
    }
}