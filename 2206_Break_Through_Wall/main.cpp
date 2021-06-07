#include <stdio.h>
#include <queue>
using namespace std;

char mp[1001][1001];
int check[1001][1001];
bool used[1001][1001];
queue<pair<int, int>> que;
int n, m;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startBFS(int a, int b) {
    que.push({a, b});
    check[a][b] = 1;

    while(!que.empty()) {
        printf("right now: %d %d\n", que.front().first, que.front().second);
        int xx, yy;
        yy = que.front().first;
        xx = que.front().second;
        que.pop();
        for(int i = 0; i < 4; i++) {
            int _y = yy + y[i];
            int _x = xx + x[i];

            printf("%d %d %d\n", _y, _x, check[_y][_x]);

            if(check[_y][_x] != 0) continue;

            if(_y < n && _x < m && _y >= 0 && _x >= 0) {}
            else continue;

            if(mp[_y][_x] == '1') {
                if(used[yy][xx] == 1) continue;
                else {
                    used[_y][_x] = true;
                    check[_y][_x] = check[yy][xx] + 1;
                    que.push({_y, _x});
                }
            } else if(mp[_y][_x] == '0') {
                check[_y][_x] = check[yy][xx] + 1;
                used[_y][_x] = used[yy][xx];
                que.push({_y, _x});
            }

            for(int j = 0; j < n; j++) {
                for(int k = 0; k < m; k++) {
                    printf("%d ", check[j][k]);
                }
                printf("             ");
                for(int k = 0; k < m; k++) {
                    printf("%d ", used[j][k]);
                }printf("\n");
            }printf("\n");
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) scanf("%s", mp[i]);

    startBFS(0, 0);

    return 0;
}