#include <stdio.h>
char arr[1001][1001];
int real[1001][1001][2];

int solve(int n, int m) {
    int t = 1;
    int t_2 = 2;
    bool now = true;
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
        }

        int flag2 = 0;
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < m - 1; j++) {
                if(real[i][j][now] == 1) flag2 = 1;
            }
        }

        if(flag2 == 1) {
            t = (t_2 * t_2);
            t_2++;
            n--;
            m--;
        } else break;

        if(now == 1) now = false;
        else now = true;
    }

    return t;
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%s", arr[i]);

    int ck = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            real[i][j][0] = arr[i][j] - 0x30;
            if(real[i][j][0] == 1 && ck == 0) ck = 1;
        }
    }
    if(ck == 0) {
        printf("0\n");
        return 0;
    }
    int ans = solve(n, m);
    printf("%d\n", ans);

    return 0;
}