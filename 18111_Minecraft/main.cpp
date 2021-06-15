#include <stdio.h>
int map[501][501];

int min(int i, int j) {
    return (i < j) ? i : j;
}

int max(int i, int j) {
    return (i >= j) ? i : j;
}

int main() {
    int mi = 2000000000, ma = -99999999;
    int n, m, b; scanf("%d %d %d", &n, &m, &b);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
            mi = min(map[i][j], mi);
            ma = max(map[i][j], ma);
        }
    }

    int realSum = 2000000000;
    int realHei = 0;
    for(int hei = mi; hei <= ma; hei++) {
        int sum = 0;
        int rock = b;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(hei < map[i][j]) {
                    sum += (map[i][j] - hei) * 2;
                    rock += (map[i][j] - hei);
                }
            }
        }

        int flag = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(hei >= map[i][j]) {
                    if(rock >= (hei - map[i][j])) {
                        sum += (hei - map[i][j]);
                        rock -= (hei - map[i][j]);
                    } else flag = 1;
                }

                if(flag == 1) break;
            }
            if(flag == 1) break;
        }
        if(flag == 1) continue;

        if(realSum >= sum) {
            realSum = sum;
            realHei = hei;
        }
    }

    printf("%d %d\n", realSum, realHei);
    return 0;
}