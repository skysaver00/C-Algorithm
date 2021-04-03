#include <bits/stdc++.h>
using namespace std;

int check[401][401];
int vi;
queue<int> bfs[2];

int x[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int y[8] = {1, -1, 2, -2, 2, -2, 1, -1};
int endX, endY;

void startBFS(int i, int j) {
    if(check[i][j] != 0) return;
    check[i][j] = 1;

    bfs[0].push(i);
    bfs[1].push(j);

    while(!bfs[0].empty() && !bfs[1].empty()) {
        int ix = bfs[0].front();
        int jy = bfs[1].front();
        bfs[0].pop();
        bfs[1].pop();

        for(int s = 0; s < 8; s++) {
            int nextX = ix + x[s];
            int nextY = jy + y[s];

            if(nextX < 0 || nextX >= vi || nextY < 0 || nextY >= vi) {
                continue;
            }

            if(check[ix][jy] + 1 < check[nextX][nextY]) {
                check[nextX][nextY] = check[ix][jy] + 1;
                cout << nextX << nextY << endl;
                bfs[0].push(nextX);
                bfs[1].push(nextY);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> vi;

        for (int i = 0; i < vi; i++) {
            for (int j = 0; j < vi; j++) {
                check[i][j] = 99999999;
            }
        }

        int startX, startY;
        cin >> startX >> startY;


        cin >> endX >> endY;

        startBFS(startX, startY);

        cout << check[endX][endY] - 1 << endl;
    }
}