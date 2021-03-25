#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[101][101];
bool visit[101][101];;
int n;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
    if (visit[y][x]) return;
    visit[y][x] = true;

    for (int k = 0; k < 4; k++) {
        int newy = y + dy[k];
        int newx = x + dx[k];

        if (newy >= 0 && newy < n && newx >= 0 && newx < n && !visit[newy][newx] && map[newy][newx] > rain) {
            dfs(newy, newx);
        }
    }
}

int main() {
    int n;
    int max = -9999;
    int min = 9999;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if(max < arr[i][j]) max = arr[i][j];
            if(max > arr[i][j]) min = arr[i][j];
        }
    }

    bool sink[101][101];
    for(int i = min; i <= max; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(arr[j][k] <= i) sink[j][k] = false;
                else sink[j][k] = true;
            }
        }

        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                printf("%d\t", sink[j][k]);
            }
            printf("\n");
        }
        printf("\n");


    }
}