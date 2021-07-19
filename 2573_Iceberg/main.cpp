#include <iostream>
#include <queue>
using namespace std;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

int ice[301][301];
int nextIce[301][301];
int count[301][301];
bool did[301][301];
queue<pair<int, int>> que;

void checkDFS(int i, int j, int num) {
    if(count[i][j] != 0) return;
    count[i][j] = num;

    for (int a = 0; a < 4; a++) {
        int newX = i + x[a];
        int newY = j + y[a];

        if(ice[newX][newY] != 0) checkDFS(newX, newY, num);
    }
}

void makeBFS(int i, int j) {
    que.push({i, j});
    did[i][j] = true;

    while(!que.empty()) {
        int nowX = que.front().first;
        int nowY = que.front().second;
        que.pop();

        int val = ice[nowX][nowY];
        for (int a = 0; a < 4; a++) {
            int newX = nowX + x[a];
            int newY = nowY + y[a];

            if (ice[newX][newY] == 0) {
                if (val > 0) val--;
            }
        }
        nextIce[nowX][nowY] = val;

        for (int a = 0; a < 4; a++) {
            int newX = nowX + x[a];
            int newY = nowY + y[a];


            if (did[newX][newY]) continue;

            if (ice[newX][newY] != 0) {
                que.push({newX, newY});
                did[newX][newY] = true;
            }
        }
    }

    return;
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ice[i][j];
        }
    }

    int year = 0;
    while(1) {
        year++;

        int num = 1;
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(ice[i][j] != 0) {
                    checkDFS(i, j, num);
                    num++;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << count[i][j] << " ";
            }cout << "\n";
        }cout << "\n";

        bool flag = false;
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(ice[i][j] != 0) {
                    makeBFS(i, j);
                    flag = true;
                }
                if(flag) break;
            }
            if(flag) break;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ice[i][j] = nextIce[i][j];
                nextIce[i][j] = 0;
                did[i][j] = 0;

                cout << ice[i][j] << " ";
            }cout << "\n";
        }cout << "\n";
    }

    return 0;
}