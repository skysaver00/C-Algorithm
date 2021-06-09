#include <stdio.h>
#include <math.h>
int mp[51][51];
int t[15][101];
int low[15];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mp[i][j]);
        }
    }

    int now = -1;
    int now2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mp[i][j] == 2) {
                now++;
                now2 = 0;
                for(int k = 0; k < n; k++) {
                    for(int h = 0; h < n; h++) {
                        if(mp[k][h] == 1) {
                            t[now][now2] = abs(k - i) + abs(h - j);
                            now2++;
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i <= now; i++) {
        int sum = 0;
        int rom = 999999;
        for(int j = 0; j < now2; j++) {
            if(rom > t[j][i]) {
                rom = t[j][i];
                low[i] = j;
            }
            printf("%d ", t[i][j]);
            sum += t[i][j];
        }
        printf("sum: %d\n", sum);
    }printf("\n");

    for(int i = 0; i <= now; i++) {
        printf("%d ", low[i]);
    }printf("\n");

    return 0;
}