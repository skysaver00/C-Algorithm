#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001];
int check[1001][1001];
bool visited[1001][1001];
queue<pair<int, int>> bfs;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};
int m, n;

void startBFS(int i, int j) {
    if (check[i][j] <= 1) return;
    check[i][j] = 1;
    visited[i][j] = true;
    bfs.push(make_pair(i, j));

    while (!bfs.empty()) {
        pair<int, int> xy = bfs.front();
        bfs.pop();

        for (int i = 0; i < 4; i++) {
            int nextX = xy.first + x[i];
            int nextY = xy.second + y[i];
            if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) continue;

            if (check[xy.first][xy.second] + 1 < check[nextX][nextY] && check[nextX][nextY] != 1 && !visited[nextX][nextY]) {
                check[nextX][nextY] = check[xy.first][xy.second] + 1;
                visited[nextX][nextY] = true;
                bfs.push(make_pair(nextX, nextY));
                //cout << nextX << nextY << bfs[0].size() << bfs[1].size() << endl;
            }
        }
    }
}

int main() {
    scanf("%d %d", &m, &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            check[i][j] = 99999999;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == -1) check[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(arr[i][j] == 1) {
                startBFS(i, j);
                /*for (int a = 0; a < n; a++) {
                    for (int b = 0; b < m; b++) printf("%d ", check[a][b]);
                    printf("\n");
                }printf("\n");*/
                for(int k = 0; k < n; k++) memset(visited[k], false, sizeof(bool) * m);
            }
        }
    }

    int max = -999999999;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check[i][j] == 999999) {
                printf("-1\n");
                return 0;
            }
            if (max < check[i][j] && check[i][j] != -1) max = check[i][j];
        }
    }

    if(max == -999999999) max = 1;

    printf("%d\n", max - 1);
    return 0;
}