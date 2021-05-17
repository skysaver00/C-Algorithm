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
        for(int i = 0; i < 4; i++) {
            if(yy + y[i] >= m || yy + y[i] < 0 || xx + x[i] >= n || xx + x[i] < 0) continue;
            if(axis[yy + y[i]][xx + x[i]] == 0) {
                bfs.push({yy + y[i], xx + x[i]});
                cpaxis[yy + y[i]][xx + x[i]] = al;
            }
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