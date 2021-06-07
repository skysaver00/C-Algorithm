#include <stdio.h>
#include <queue>
using namespace std;

char mp[1001][1001];
int check[1001][1001];
bool used[1001][1001];
queue<pair<int, int>> que;
int val = 1;

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

            if(mp[_y][_x] == 1) {
                if(used[a][b] == 1) continue;
                else {
                    used[_y][_x] = true;
                    check[_y][_x] = val++;
                }
            } else if(mp[_y][_x] == 0) {
                check[_y][_x] = val++;
                used[_y][_x] = used[a][b];
                que.push({_y, _x});
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) scanf("%s", mp[i]);

    startBFS(0, 0);

    return 0;
}