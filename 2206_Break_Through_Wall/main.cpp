#include <stdio.h>
#include <queue>
using namespace std;
int min(int i, int j) {
    return i < j ? i : j;
}

char mp[1001][1001];
int check[1001][1001];
bool used[1001][1001];

int check2[1001][1001];
bool used2[1001][1001];

queue<pair<int, int>> que;
queue<pair<int, int>> que2;
int n, m;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startBFS(int a, int b) {
    que.push({a, b});
    check[a][b] = 1;

    while(!que.empty()) {
        int xx, yy;
        yy = que.front().first;
        xx = que.front().second;
        que.pop();
        for(int i = 0; i < 4; i++) {
            int _y = yy + y[i];
            int _x = xx + x[i];

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
                for(int i = 0; i < 4; i++) {
                    //check[_y + y[i]][_x + x[i]] - check[_y][_x] == 1
                    if(check[_y + y[i]][_x + x[i]] != 0 &&used[_y + y[i]][_x + x[i]] == 0) used[_y][_x] = 0;
                }
                que.push({_y, _x});
            }
        }
    }
}

void startBFSback(int a, int b) {
    que2.push({a, b});
    check2[a][b] = 1;

    while(!que2.empty()) {
        int xx, yy;
        yy = que2.front().first;
        xx = que2.front().second;
        que2.pop();
        for(int i = 0; i < 4; i++) {
            int _y = yy + y[i];
            int _x = xx + x[i];

            if(check2[_y][_x] != 0) continue;

            if(_y < n && _x < m && _y >= 0 && _x >= 0) {}
            else continue;

            if(mp[_y][_x] == '1') {
                if(used2[yy][xx] == 1) continue;
                else {
                    used2[_y][_x] = true;
                    check2[_y][_x] = check2[yy][xx] + 1;
                    que2.push({_y, _x});
                }
            } else if(mp[_y][_x] == '0') {
                check2[_y][_x] = check2[yy][xx] + 1;
                used2[_y][_x] = used2[yy][xx];
                for(int i = 0; i < 4; i++) {
                    //check[_y + y[i]][_x + x[i]] - check[_y][_x] == 1
                    if(check2[_y + y[i]][_x + x[i]] != 0 &&used2[_y + y[i]][_x + x[i]] == 0) used2[_y][_x] = 0;
                }
                que2.push({_y, _x});
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) scanf("%s", mp[i]);

    startBFS(0, 0);
    startBFSback(n - 1, m - 1);

    int ans = check[n - 1][m - 1];
    int ans2 = check2[0][0];

    if(ans == 0 && ans2 == 0) {
        printf("-1\n");
        return 0;
    } else if(ans == 0) printf("%d\n", ans2);
    else if(ans2 == 0) printf("%d\n", ans);
    else {
        int mi = min(ans, ans2);
        printf("%d\n", mi);
    }

    return 0;
}