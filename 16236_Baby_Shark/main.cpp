#include <iostream>
#include <queue>
using namespace std;

int n, level = 2, cnt = 0;
int map[21][21];
int ckMap[21][21];
queue<pair<int, int>> que2;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
pair<int, int> point;

int x[4] = {0, -1, 1, 0};
int y[4] = {-1, 0, 0, 1};

bool bfs() {
    que.push({point.first, point.second});
    ckMap[point.first][point.second] = 1;

    bool flag = false;
    while(!que.empty()) {
        int i = que.top().first;
        int j = que.top().second;

        que.pop();
        for (int a = 0; a < 4; a++) {
            int ii = i + y[a];
            int jj = j + x[a];

            //printf("%d %d %d %d %d %d %d\n", que.size(), y[a], x[a], i, j, ii, jj);

            if ((ii > n || ii < 0) || (jj > n || jj < 0)) continue;

            if(ckMap[ii][jj] != 0) continue;
            else {
                if (map[ii][jj] >= level || map[ii][jj] == 0) {
                    ckMap[ii][jj] = ckMap[i][j] + 1;

                    for(int b = 0; b < n; b++) {
                        for (int c = 0; c < n; c++) {
                            printf("%d ", ckMap[b][c]);
                        }printf("\n");
                    }printf("\n");

                    que.push({ii, jj});
                } else {
                    ckMap[ii][jj] = ckMap[i][j] + 1;

                    printf("%d %d\n", ii, jj);
                    printf("%d %d\n", level, map[ii][jj]);
                    for(int b = 0; b < n; b++){
                        for(int c = 0; c < n; c++) {
                            printf("%d ", ckMap[b][c]);
                        }printf("\n");
                    }printf("\n");

                    cnt += (ckMap[ii][jj] - 1);
                    cout << "Cnt is: " << cnt << "\n";
                    map[ii][jj] = 9;
                    map[point.first][point.second] = 0;
                    point.first = ii, point.second = jj;
                    flag = true;
                }
            }
            if (flag) break;
        }



        if (flag) {
            while(!que.empty()) que.pop();
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ckMap[i][j] = 0;
        }
    }

    if (flag) return true;
    else return false;
}

void solve(int ate) {
    bool possible = false;
    int food = ate;
    cout << ate << "\n";
    if(food == level) {
        level++;
        food = 0;
    }

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }printf("\n");
    }printf(":)\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(map[i][j] < level) possible = true;
        }
    }

    if(possible) {
        bool yes = bfs();
        if(yes) {
            solve(food + 1);
        }
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
    cout << cnt << "\n";

    return 0;
}