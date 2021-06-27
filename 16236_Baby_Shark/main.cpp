#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, level = 2, cnt = 0;
int map[21][21];
int ckMap[21][21];
queue<pair<int, int>> que;
vector<pair<int, int>> vec;
pair<int, int> point;

int x[4] = {0, -1, 1, 0};
int y[4] = {-1, 0, 0, 1};

bool bfs() {
    que.push({point.first, point.second});
    ckMap[point.first][point.second] = 1;
    int now = 2;
    bool flag = false;
    while(!que.empty()) {
        int i = que.front().first;
        int j = que.front().second;

        que.pop();
        for (int a = 0; a < 4; a++) {
            int ii = i + y[a];
            int jj = j + x[a];

            if(ii > n || ii < 0 || jj > n || jj < 0) continue;
            if(map[ii][jj] > level) continue;
            if(ckMap[ii][jj] != 0) continue;

            ckMap[ii][jj] = ckMap[i][j] + 1;
        }

        if(que.empty()) {
            /*for (int a = 0; a < n; a++) {
                for (int b = 0; b < n; b++) {
                    printf("%d ", ckMap[a][b]);
                }
                printf("\n");
            }printf("\n");*/

            for (int a = 0; a < n; a++) {
                for (int b = 0; b < n; b++) {
                    if(ckMap[a][b] == now && map[a][b] < level && map[a][b] != 0) {
                        cnt += (ckMap[a][b] - 1);
                        //cout << "Cnt is: " << cnt << "\n";
                        map[a][b] = 9;
                        map[point.first][point.second] = 0;
                        point.first = a, point.second = b;
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
            }

            if(!flag) {
                for (int a = 0; a < n; a++) {
                    for (int b = 0; b < n; b++) {
                        if(ckMap[a][b] == now) que.push({a, b});
                    }
                }
                now++;
            } else {
                for (int a = 0; a < n; a++) {
                    for (int b = 0; b < n; b++) {
                        ckMap[a][b] = 0;
                    }
                }
            }
        }
    }
    if(flag) return true;
    else return false;
}

void solve(int ate) {
    bool possible = false;
    int food = ate;
    if(food == level) {
        level++;
        food = 0;
    }
    /*printf("___________________food level %d %d\n", food, level);
    cout << "ate " << food << "\n";

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }printf("\n");
    }printf(":)\n");*/

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == point.first && j == point.second) continue;
            if(map[i][j] < level && map[i][j] != 0) possible = true;
        }
    }

    if(possible) {
        int yes = bfs();
        if(yes) solve(food + 1);
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