#include <stdio.h>
#include <memory.h>

using namespace std;
int land[51][51];
int cnt = 1;
bool flag = false;
int check[51][51];
int m, n, k;

int _x[4] = {1, 0, -1, 0};
int _y[4] = {0, 1, 0, -1};

void startDFS(int y, int x) {
    if(check[y][x] != 0) return;
    if(land[y][x] == 0) return;
    flag = true;
    check[y][x] = cnt;

    for(int i = 0; i < 4; i++) {
        int newY = y + _y[i];
        int newX = x + _x[i];

        if(check[newY][newX] == 0 && land[newY][newX] != 0 && newY < n && newY >= 0 && newX < m && newX >= 0) {
            startDFS(newY, newX);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d %d", &m, &n, &k);

        for(int i = 0; i < k; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            land[y][x] = 1;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                startDFS(i, j);

                if(flag) {
                    cnt++;
                    flag = false;
                }
            }
        }

        int max = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(check[i][j] > max) max = check[i][j];
            }
        }

        printf("%d\n", max);

        for(int i = 0; i < 50; i++) {
            memset(land[i], 0, sizeof(int) * 50);
            memset(check[i], 0, sizeof(int) * 50);
        }
        cnt = 1;
    }
}