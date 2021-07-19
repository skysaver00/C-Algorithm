#include <iostream>
#include <queue>
using namespace std;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

int ice[301][301];
int count[301][301];
bool did[301][301];
queue<pair<int, int>> que;

void checkDFS(int i, int j, int num) {

}

void makeBFS(int i, int j) {
    que.push({i, j});
    did[i][j] = true;

    for(int i = 0; i < 4; i++) {
        int xX = i + x[i];
        int yY = j + y[i];

        if(ice[xX][yY] == 0) {
            if(ice[i][j] > 0) ice[i][j] -= 1;
        }
    }

    for(int i = 0; i < 4; i++) {
        int newX = i + x[i];
        int newY = j + y[i];

        if(did[newX][newY]) continue;

        if(ice[newX][newY] != 0) {
            que.push({newX, newY});
            did[newX][newY] = true;
        }
    }
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
                cout << ice[i][j] << " ";
                did[i][j] = 0;
            }cout << "\n";
        }cout << "\n";
    }

    return 0;
}