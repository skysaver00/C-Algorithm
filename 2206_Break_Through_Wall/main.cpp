#include <stdio.h>
#include <queue>
using namespace std;

char mp[1001][1001];
int check[1001][1001];
bool used[1001][1001];
queue<pair<int, int>> que;
int val = 1;
int n, m;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startBFS(int a, int b) {
    que.push({a, b});
    check[a][b] = val++;

    while(!que.empty()) {
        que.pop();
        for(int i = 0; i < 4; i++) {
            int _y = a + y[i];
            int _x = b + x[i];

            if(check[_y][_x] != 0) continue;
            if(_y < n && _x < m && _y >= 0 && _x >= 0) {}
            else continue;

            if(mp[_y][_x] == 1) {
                if(used[a][b] == 1) continue;
                else {
                    used[_y][_x] = true;
                    check[_y][_x] = val++;
                    que.push({_y, _x});
                }
            } else if(mp[_y][_x] == 0) {
                check[_y][_x] = val++;
                used[_y][_x] = used[a][b];
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