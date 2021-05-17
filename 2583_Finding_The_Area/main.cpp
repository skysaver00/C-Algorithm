#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int axis[101][101];
int cpaxis[101][101];
int arr[10001];

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
        bfs.pop();
        for(int i = 0; i < 4; i++) {
            if(_y + y[i] >= m || _y + y[i] < 0 || _x + x[i] >= n || _x + x[i] < 0) continue;
            if(axis[_y + y[i]][_x + x[i]] == 0 && cpaxis[_y + y[i]][_x + x[i]] == 0) {
                bfs.push({_y + y[i], _x + x[i]});
                cpaxis[_y + y[i]][_x + x[i]] = al;
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

    int val = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            bool find = startBFS(i, j, val);
            if(!find) continue;
            val++;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            arr[cpaxis[i][j]]++;
        }
    }

    sort(arr + 1, arr + val);
    printf("%d\n", val - 1);
    for(int i = 1; i < val; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}