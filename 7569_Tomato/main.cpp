#include <bits/stdc++.h>

using namespace std;

int arr[100][101][101];
int check[100][101][101];
bool visited[100][101][101];
queue<tuple<int, int, int>> bfs;

int x[6] = {1, 0, -1, 0, 0, 0};
int y[6] = {0, 1, 0, -1, 0, 0};
int z[6] = {0, 0, 0, 0, 1, -1};
int m, n, l;

void startBFS() {
    while (!bfs.empty()) {
        tuple<int, int, int> xy = bfs.front();
        bfs.pop();

        for (int i = 0; i < 6; i++) {
            int nextX = get<0>(xy) + x[i];
            int nextY = get<1>(xy) + y[i];
            int nextZ = get<2>(xy) + z[i];
            if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m || nextZ < 0 || nextZ >= l) continue;

            if (check[get<0>(xy)][get<1>(xy)][get<2>(xy)] + 1 < check[nextX][nextY][nextZ] && check[nextX][nextY][nextZ] != 1 && !visited[nextX][nextY][nextZ]) {
                check[nextX][nextY][nextZ] = check[get<0>(xy)][get<1>(xy)][get<2>(xy)] + 1;
                visited[nextX][nextY][nextZ] = true;
                bfs.push(make_tuple(nextX, nextY, nextZ));
                //cout << nextX << nextY << bfs.front().first << bfs.front().second << endl;
            }
        }
    }
}

int main() {
    scanf("%d %d %d", &m, &n, &l);

    for(int k = 0; k < l; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                check[i][j][k] = 99999999;
            }
        }
    }

    for(int k = 0; k < l; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &arr[i][j][k]);
                if (arr[i][j][k] == -1) check[i][j][k] = -1;
                if (arr[i][j][k] == 1) {
                    check[i][j][k] = 1;
                    visited[i][j][k] = true;
                    bfs.push(make_tuple(i, j, k));
                }
            }
        }
    }

    bool flag = false;
    for(int k = 0; k < l; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check[i][j][k] == 99999999) {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) break;
    }

    if(!flag) {
        printf("0\n");
        return 0;
    } flag = false;

    startBFS();

    int max = -999999999;

    /*for(int k = 0; k < l; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", check[i][j][k]);
            }printf("\n");
        }printf("\n");
    }*/

    for(int k = 0; k < l; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check[i][j][k] == 99999999) {
                    printf("-1\n");
                    return 0;
                }
                if (max < check[i][j][k] && check[i][j][k] != -1) max = check[i][j][k];
            }
        }
    }

    if(max == -999999999) max = 1;

    printf("%d\n", max - 1);
    return 0;
}