#include <iostream>
#include <queue>
using namespace std;

int n, level = 2, cnt = 0;
int map[21][21];
int ckMap[21][21];
queue<pair<int, int>> que;
pair<int, int> point;

int x[4] = {0, -1, 1, 0};
int y[4] = {-1, 0, 0, 1};

void bfs() {
    que.push({point.first, point.second});
    ckMap[point.first][point.second] = 1;

    while(!que.empty()) {
        int i = que.front().first;
        int j = que.front().second;

        que.pop();
        bool flag = false;
        for (int a = 0; a < 4; a++) {
            int ii = i + x[a];
            int jj = j + y[a];

            if (ii > n && ii < 0 && jj > n && jj < 0) continue;
            else {
                if (map[ii][jj] < level) {
                    ckMap[ii][jj] = ckMap[i][j] + 1;
                    que.push({ii, jj});
                } else {
                    ckMap[ii][jj] = ckMap[i][j] + 1;

                    for(int b = 0; b < n; b++){
                        for(int c = 0; c < n; c++) {
                            printf("%d ", ckMap[b][c]);
                        }printf("\n");
                    }printf("\n");

                    cnt += ckMap[ii][jj];
                    map[ii][jj] = 0;

                    point.first = ii, point.second = jj;
                    flag = true;
                }
            }
            if (flag) break;
        }
        if (flag) while(!que.empty()) que.pop();
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ckMap[i][j] = 0;
        }
    }
    return;
}

void solve(int ate) {
    bool possible = false;
    int food = ate;
    if(food == level) {
        level++;
        food = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(map[i][j] < level) possible = true;
        }
    }

    if(possible) {
        bfs();
        solve(food + 1);
    } else return;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> map[i][j];
            if(map[i][j] == 9) {
                point.first = i;
                point.second = j;
            }
        }
    }

    solve(0);

    return 0;
}