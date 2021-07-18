#include <iostream>
#include <queue>
using namespace std;

char map[51][51];
int able[51][51];
queue<pair<int, int>> que;
int startX, startY;

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
        }
    }

    startBFS(startX, startY);

    return 0;
}