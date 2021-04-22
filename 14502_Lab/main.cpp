#include <bits/stdc++.h>
using namespace std;

int room[10][10];
int mirRoom[10][10];

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};
queue<pair<int, int>> bfs;

bool cmp(int x1, int y1, int x2, int y2, int x3, int y3) {
    if((x1 == x2 && y1 == y2) || (x1 == x3 && y1 == y3) || (x2 == x3 && y2 == y3)) return true;
    else return false;
}

int startBFS(int n, int m, int safe) {
    int realSafe = safe;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mirRoom[i][j] == 2) {
                bfs.push({i, j});
                realSafe--;
            }
        }
    }

    while(!bfs.empty()) {
        int down = bfs.front().first;
        int left = bfs.front().second;
        bfs.pop();

        for(int i = 0; i < 4; i++) {
            if(down + x[i] > n || down + x[i] < 0 || left + y[i] > m || left + y[i] < 0) continue;
            if(mirRoom[down + x[i]][left + y[i]] == 0) {
                mirRoom[down + x[i]][left + y[i]] = 2;
                realSafe--;
                bfs.push({down + x[i], left + y[i]});
            }
        }
    }

    return realSafe;
}


int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> room[i][j];
        }
    }

    int l = n * m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            mirRoom[i][j] = room[i][j];
            if(room[i][j] == 1) l--;
        }
    }

    int max = -9999;
    for(int i = 0; i < n; i++) {
        for(int ii = 0; ii < m; ii++) {
            for(int j = 0; j < n; j++) {
                for(int jj = 0; jj < m; jj++) {
                    for(int k = 0; k < n; k++) {
                        for(int kk = 0; kk < m; kk++) {
                            if(cmp(i, ii, j, jj, k, kk)) continue;

                            if(mirRoom[i][ii] == 1 || mirRoom[i][ii] == 2) continue;
                            if(mirRoom[j][jj] == 1 || mirRoom[j][jj] == 2) continue;
                            if(mirRoom[k][kk] == 1 || mirRoom[k][kk] == 2) continue;

                            mirRoom[i][ii] = mirRoom[j][jj] = mirRoom[k][kk] = 1;
                            int safeRoom = l - 3;
                            int comp = startBFS(n, m, safeRoom);

                            if(comp > max) {
                                printf("%d\n", comp);
                                max = comp;

                                for(int x = 0; x < n; x++) {
                                for(int y = 0; y < m; y++) {
                                    printf("%d ", mirRoom[x][y]);
                                } printf("\n");
                            } printf("\n");
                            }

                            /*for(int x = 0; x < n; x++) {
                                for(int y = 0; y < m; y++) {
                                    printf("%d ", mirRoom[x][y]);
                                } printf("\n");
                            } printf("\n");*/

                            for(int i = 0; i < n; i++) {
                                for(int j = 0; j < m; j++) {
                                    mirRoom[i][j] = room[i][j];
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", max);

    return 0;
}