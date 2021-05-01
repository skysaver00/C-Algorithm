#include <stdio.h>
int gameArea[101][101];
long long path[101][101];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &gameArea[i][j]);
        }
    }

    path[0][0] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int jump = gameArea[i][j];
            int right = jump + j;
            int down = jump + i;

            if(jump == 0) continue;

            if(right < n) path[i][right] += path[i][j];
            if(down < n) path[down][j] += path[i][j];
        }
    }

    printf("%lld\n", path[n - 1][n - 1]);

    return 0;
}