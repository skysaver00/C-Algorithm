#include <iostream>
#include <queue>
using namespace std;

int axis[101][101];
int zero[101][101];
queue<pair<int, int>> zeroque;
queue<pair<int, int>> que;

int _x[4] = {1, 0, -1, 0};
int _y[4] = {0, 1, 0, -1};

bool check(int n, int m) {
    zeroque.push({0, 0});
    zero[0][0] = 2;
    while(!zeroque.empty()) {
        int X = zeroque.front().first;
        int Y = zeroque.front().second;

        for(int i = 0; i < 4; i++) {
            if(X + _x[i] < 0 || X + _x[i] >= n || Y + _y[i] < 0 || Y + _y[i] >= m)
                continue;
            if(axis[X + _x[i]][Y + _y[i]] == 0) {
                zero[X + _x[i]][Y + _y[i]] = 2;
                zeroque.push({X + _x[i], Y + _y[i]});
            }
        }
        zeroque.pop();
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << zero[i][j] << " ";
        }cout << "\n";
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(axis[i][j] == 1) {
                int cnt = 0;
                for(int k = 0; k < 4; k++) {
                    if((i + _x[k]) < 0 || (i + _x[k]) >= n || (j + _y[k] < 0) || (j + _y[k] >= m))
                        continue;

                    ax
                }
            }
        }
    }
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> axis[i][j];
        }
    }

    while(1) {
        bool flag = check(n, m);
        if(!flag) break;
    }

    return 0;
}