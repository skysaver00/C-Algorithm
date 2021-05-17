#include <cstdio>
#include <queue>
using namespace std;
int axis[101][101];
int cpaxis[101][101];

int m, n, k;
int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};
queue<pair<int, int>> bfs;

bool startBFS(int yy, int xx, int al) {
    if(axis[yy][xx] == 1 || cpaxis[yy][xx] != 0) return false;

    bfs.push({yy, xx});
    cpaxis[yy][xx] = al;
    while(!bfs.empty()) {
        int _x, _y;
        _y = bfs.front().first;
        _x = bfs.front().second;
        printf("%d %d\n", _y, _x);
        bfs.pop();
        for(int i = 0; i < 4; i++) {
            if(_y + y[i] >= m || _y + y[i] < 0 || _x + x[i] >= n || _x + x[i] < 0) continue;
            if(axis[_y + y[i]][_x + x[i]] == 0 && cpaxis[_y + y[i]][_x + x[i]] == 0) {
                bfs.push({_y + y[i], _x + x[i]});
                cpaxis[_y + y[i]][_x + x[i]] = al;
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                printf("%d ", cpaxis[i][j]);
            }printf("\n");
        }
    }

    return true;
}

int main() {
    scanf("%d %d %d", &m, &n, &k);

    for(int i = 0; i < k; i++) {
        int lx, ly, rx, ry;
        scanf("%d %d %d %d", &lx, &ly, &rx, &ry);

        for(int j = lx; j < rx; j++) {
            for(int k = ly; k < ry; k++) {
                axis[k][j] = 1;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", axis[i][j]);
        }printf("\n");
    }

    int val = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            bool find = startBFS(i, j, val);
            if(!find) continue;
            val++;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", cpaxis[i][j]);
        }printf("\n");
    }

    return 0;
}