#include <bits/stdc++.h>
using namespace std;

short arr[1001][1001];
short check[1001][1001];

queue<int> bfs[2];

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startBFS(int i, int j) {
    if(check[i][j] <= 1) return;
    check[i][j] = 1;
    bfs[0].push(i);
    bfs[1].push(j);

    while(!bfs[0].empty() && !bfs[1].empty()) {
        int ix = bfs[0].front();
        int jy = bfs[1].front();
        bfs[0].pop();
        bfs[1].pop();

        for(int i = 0; i < 4; i++) {
            int nextX = ix + x[i];
            int nextY = jy + y[i];

            if(check[ix][jy] + 1 <= check[nextX][nextY] && check[nextX][nextY] != -1) {
                check[nextX][nextY] = check[ix][jy] + 1;
                bfs[0].push(nextX);
                bfs[1].push(nextY);
            }
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            check[i][j] = 999999;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == -1) check[i][j] = -1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 1) {
                startBFS(i, j);
                /*for (int a = 0; a < n; a++) {
                    for (int b = 0; b < m; b++) printf("%d ", check[a][b]);
                    printf("\n");
                }*/
            }
        }
    }

    int max = -999999999;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(check[i][j] == 999999) {
                cout << -1 << endl;
                return 0;
            }
            if(max < check[i][j]&& check[i][j] != -1) max = check[i][j];
        }
    }

    cout << max - 1 << endl;
    return 0;
}