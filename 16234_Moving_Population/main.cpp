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

int openTerr(int n, int low, int high) {
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

                //cout << "val: " << terr[_x][_y] << "\n";

                for(int l = 0; l < 4; l++) {
                    int newx = _x + x[l];
                    int newy = _y + y[l];
                    if(newx < 0 || newx >= n || newy < 0 || newy >= n) continue;

                    //cout << terr[_x][_y] << " " << terr[newx][newy] << "\n";
                    //cout << abs(terr[_x][_y] - terr[newx][newy]) << "\n";
                    if(abs(terr[_x][_y] - terr[newx][newy]) >= low && abs(terr[_x][_y] - terr[newx][newy]) <= high) {
                        ck = true;
                        if(open[newx][newy] == 0) que.push({newx, newy});
                        open[_x][_y] = open[newx][newy] = k;
                    }
                }

                /*for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) cout << open[i][j] << " ";
                    cout << "\n";
                }*/
            }

            if(ck) k++;
        }
    }

    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cout << open[i][j] << " ";
        cout << "\n";
    }*/

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            pop[open[i][j]][0] += terr[i][j];
            pop[open[i][j]][1]++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(open[i][j] == 0) {
                newTerr[i][j] = terr[i][j];
                continue;
            }
            newTerr[i][j] = pop[open[i][j]][0] / pop[open[i][j]][1];
            //cout << "op    ";
            //cout << newTerr[i][j] << " ";
        }//cout << "\n";
    }

    return k;
}

void clear(int n, int top) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            terr[i][j] = newTerr[i][j];
            open[i][j] = 0;
        }
    }

    for(int i = 0; i <= top; i++) {
        pop[i][0] = pop[i][1] = 0;
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
        int top = openTerr(n, l, r);

        bool flag = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(terr[i][j] != newTerr[i][j]) flag = true;
                if(flag) break;
            }
            if(flag) break;
        }

        if(flag) clear(n, top);

        if(!flag) break;
        t++;

        /*for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << newTerr[i][j] << " ";
            }cout << "\n";
        }

        cout << "BANG!!\n";*/
    }

    cout << t << "\n";
    return 0;
}