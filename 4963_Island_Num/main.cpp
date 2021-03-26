#include <stdio.h>
#include <memory.h>

int land[51][51];
int cnt = 1;
bool flag = false;
int check[51][51];
int m, n, k;

int _x[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int _y[8] = {0, 1, 0, -1, 1, -1, 1, -1};

void startDFS(int y, int x) {
    if (check[y][x] != 0) return;
    if (land[y][x] == 0) return;
    flag = true;
    check[y][x] = cnt;

    for (int i = 0; i < 8; i++) {
        int newY = y + _y[i];
        int newX = x + _x[i];

        if (check[newY][newX] == 0 && land[newY][newX] != 0 && newY < n && newY >= 0 && newX < m && newX >= 0) {
            startDFS(newY, newX);
        }
    }
}

int main() {
    while(1) {
        scanf("%d %d", &m, &n);

        if (m == 0 && n == 0) return 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &land[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                startDFS(i, j);

                if (flag) {
                    cnt++;
                    flag = false;
                }
            }
        }

        int max = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check[i][j] > max) max = check[i][j];
            }
        }

        printf("%d\n", max);

        for (int i = 0; i < 50; i++) {
            memset(land[i], 0, sizeof(int) * 50);
            memset(check[i], 0, sizeof(int) * 50);
        }
        cnt = 1;
    }
}