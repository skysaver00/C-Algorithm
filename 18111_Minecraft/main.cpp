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

    for(int hei = mi; hei <= ma; hei++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                
            }
        }
    }

    return 0;
}