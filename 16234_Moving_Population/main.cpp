#include <iostream>
#include <queue>
using namespace std;
int terr[51][51];
int newTerr[51][51];
int open[51][51];

int pop[2501][2];
queue<pair<int, int>> que;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void openTerr(int n, int low, int high) {
    int k = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            bool ck = false;

            if(open[i][j] == 0) que.push({i, j});
            else continue;

            while(!que.empty()) {
                int _x = que.front().first;
                int _y = que.front().second;
                que.pop();

                cout << "val: " << terr[_x][_y] << "\n";

                for(int l = 0; l < 4; l++) {
                    int newx = _x + x[l];
                    int newy = _y + y[l];
                    if(newx < 0 || newx >= n || newy < 0 || newy >= n) continue;

                    cout << terr[_x][_y] << " " << terr[newx][newy] << "\n";
                    cout << abs(terr[_x][_y] - terr[newx][newy]) << "\n";
                    if(abs(terr[_x][_y] - terr[newx][newy]) >= low && abs(terr[_x][_y] - terr[newx][newy]) <= high) {
                        ck = true;
                        if(open[newx][newy] == 0) que.push({newx, newy});
                        open[_x][_y] = open[newx][newy] = k;
                    }
                }

                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) cout << open[i][j] << " ";
                    cout << "\n";
                }
            }

            if(ck) k++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cout << open[i][j] << " ";
        cout << "\n";
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            pop[open[i][j]][0] += terr[i][j];
            pop[open[i][j]][1]++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            newTerr[i][j] = pop[open[i][j]][0] / pop[open[i][j]][1];
        }
    }
}

int main() {
    int n, l, r; cin >> n >> l >> r;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cin >> terr[i][j];
    }

    int t = 0;
    while(1) {
        openTerr(n, l, r);

        bool flag = false;

    }

    return 0;
}