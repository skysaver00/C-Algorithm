#include <iostream>
#include <queue>
using namespace std;

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

char map[51][51];
int able[51][51];
int water[51][51];
queue<pair<int, int>> que;
queue<pair<int, int>> flood;
int startX, startY;

void startWater(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(map[i][j] == '*') {
                flood.push({i, j});
                water[i][j] = 0;
            }
        }
    }

    while(!flood.empty()) {
        int _x, _y;
        _x = flood.front().first;
        _y = flood.front().second;
        flood.pop();

        for(int i = 0; i < 4; i++) {
            int __x = _x + x[i];
            int __y = _y + y[i];

            if(__x < 0 || __x >= n || __y < 0 || __y >= m) continue;
            if(water[__x][__y] == 'S' || water[__x][__y] == 'X' || water[__x][__y] == 'D') continue;


            if(water[__x][__y] > water[_x][_y] + 1) {
                water[__x][__y] = water[_x][_y] + 1;
                flood.push({__x, __y});
            }
        }
    }


}

void startBFS(int i, int j) {

}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> map[i][j];
            if(map[i][j] == 'S') {
                startX = i;
                startY = j;
            }

            water[i][j] = 9999;
        }
    }
    startWater(n, m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << water[i][j] << " ";
        }cout << "\n";
    }
    startBFS(startX, startY);

    return 0;
}