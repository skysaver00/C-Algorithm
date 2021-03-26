#include <stdio.h>
#include <memory.h>

using namespace std;
int land[101][101];
int cnt = 1;
bool flag = false;
int check[101][101];
bool sink[101][101];
int n;
int max2 = 1;

int _x[4] = {1, 0, -1, 0};
int _y[4] = {0, 1, 0, -1};

void startDFS(int y, int x) {
    if(check[y][x] != 0) return;
    if(sink[y][x] == 0) return;
    flag = true;
    check[y][x] = cnt;

    for(int i = 0; i < 4; i++) {
        int newY = y + _y[i];
        int newX = x + _x[i];

        if(check[newY][newX] == 0 && sink[newY][newX] != 0 && newY < n && newY >= 0 && newX < n && newX >= 0) {
            startDFS(newY, newX);
        }
    }
}

int main() {
    int max = -9999;
    int min = 9999;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &land[i][j]);
            if(max < land[i][j]) max = land[i][j];
            if(min > land[i][j]) min = land[i][j];
        }
    }

    for(int i = min - 1; i < max; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(land[j][k] <= i) sink[j][k] = false;
                else sink[j][k] = true;
            }
        }

        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                startDFS(j, k);

                if(flag) {
                    cnt++;
                    flag = false;
                }
            }
        }


        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(check[j][k] > max2) max2 = check[j][k];
            }
        }

        for(int j = 0; j < 100; j++) {
            memset(check[j], 0, sizeof(int) * 100);
            memset(sink[j], false, sizeof(bool) * 100);
        }
        cnt = 1;
    }

    printf("%d\n", max2);
}