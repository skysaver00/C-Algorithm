#include <bits/stdc++.h>
using namespace std;

char arr[101][101];
int normal[101][101];
int blind[101][101];
int cnt = 1;

queue<int> bfs[2];
bool flag = false;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void normalBFS(int i, int j) {
    if(normal[i][j] != 0) return;
    bfs[0].push(i);
    bfs[1].push(j);
    char color = arr[i][j];
    flag = true;
    normal[i][j] = cnt;

    while(!bfs[0].empty() && !bfs[1].empty()) {
        int front_i = bfs[0].front();
        int front_j = bfs[1].front();

        bfs[0].pop();
        bfs[1].pop();

        for(int a = 0; a < 4; a++) {
            int next_i = front_i + x[a];
            int next_j = front_j + y[a];

            if(arr[next_i][next_j] == color && normal[next_i][next_j] == 0) {
                normal[next_i][next_j] = cnt;
                bfs[0].push(next_i);
                bfs[1].push(next_j);
            }
        }
    }
}

void blindBFS(int i, int j) {
    if(blind[i][j] != 0) return;
    bfs[0].push(i);
    bfs[1].push(j);
    char color = arr[i][j];
    flag = true;
    blind[i][j] = cnt;

    while(!bfs[0].empty() && !bfs[1].empty()) {
        int front_i = bfs[0].front();
        int front_j = bfs[1].front();

        bfs[0].pop();
        bfs[1].pop();

        for(int a = 0; a < 4; a++) {
            int next_i = front_i + x[a];
            int next_j = front_j + y[a];

            if(arr[next_i][next_j] == color && blind[next_i][next_j] == 0) {
                blind[next_i][next_j] = cnt;
                bfs[0].push(next_i);
                bfs[1].push(next_j);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            normalBFS(i, j);

            if(flag) cnt++;
            flag = false;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 'G') arr[i][j] = 'R';
        }
    }

    cnt = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            blindBFS(i, j);

            if(flag) cnt++;
            flag = false;
        }
    }

    int maxNormal = -99999999;
    int maxBlind = -99999999;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(maxNormal < normal[i][j]) maxNormal = normal[i][j];
            if(maxBlind < blind[i][j]) maxBlind = blind[i][j];
        }
    }

    cout << maxNormal << " " << maxBlind << "\n";

    return 0;
}