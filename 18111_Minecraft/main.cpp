#include <stdio.h>
int map[501][501];

int min(int i, int j) {
    return i < j;
}

int max(int i, int j) {
    return i > j;
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
                        sum += map[i][j] - hei;
                        rock -= (map[i][j] - hei);
                    } else flag = 1;
                }

                if(flag == 1) break;
            }
            if(flag == 1) break;
        }
        if(flag == 1) continue;
        realSum = min(realSum, sum);

        printf("%d\n", sum);
    }

    printf("%d\n", realSum);

    return 0;
}