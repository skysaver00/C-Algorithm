#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

char maze[101][101];
bool check[101][101];
queue<int> bfs[2];
int count[101][101];

int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};

void startBFS(int n, int m) {
    bfs[0].push(n);
    bfs[1].push(m);
    check[n][m] = 1;

    while(!bfs[0].empty()  && !bfs[1].empty()) {
        int nx = bfs[0].front();
        int ny = bfs[1].front();
        bfs[0].pop();
        bfs[1].pop();

        for(int i = 0; i < 4; i++) {
            int _x = nx + x[i];
            int _y = ny + y[i];

            if(check[_x][_y] == 0 && maze[_x][_y] == '1') {
                if(count[n][m] + 1 < count[_x][_y]) {
                    count[_x][_y] = count[nx][ny] + 1;

                    bfs[0].push(_x);
                    bfs[1].push(_y);

                    check[_x][_y] = 1;
                }
            }
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) scanf("%s", maze[i]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            count[i][j] = 999999;
        }
    }
    count[0][0] = 1;

    startBFS(0, 0);
    cout << count[n - 1][m - 1] << "\n";

    return 0;
}