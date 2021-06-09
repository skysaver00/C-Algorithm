#include <stdio.h>
char arr[1001][1001];
int real[1001][1001][2];

int solve(int n, int m) {
    int t = 1;
    int now = 1;
    while(1) {
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < m - 1; j++) {
                int flag = 1;
                for(int ii = i; ii < i + 2; ii++) {
                    for(int jj = j; jj < j + 2; jj++) {
                        if(real[ii][jj][!now] == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    if(flag == 0) break;
                }
                if(flag == 0) real[i][j][now] = 0;
                else real[i][j][now] = 1;
            }
            if(now == 1) now = 0;
            else now = 1;

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    printf("%d ", real[i][j][0]);
                }printf("\n");
            }printf("\n");

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    printf("%d ", real[i][j][1]);
                }printf("\n");
            }printf("\n");
        }
    }
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%s", arr[i]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            real[i][j][0] = arr[i][j] - 0x30;
            printf("%d ", real[i][j]);
        }
    }
    int ans = solve(n, m);

    return 0;
}