#include <iostream>
using namespace std;

bool map[51][51];
int check[51][51];
int m, n, k;

int xx[4] = {1, 0, -1, 0};
int yy[4] = {0, 1, 0, -1};

void startDFS(int a, int b, int num) {
    if(check[a][b] != 0) return;
    if(map[a][b] == 0) return;
    check[a][b] = num;

    for(int i = 0; i < 4; i++) {
        int newX = b + xx[i];
        int newY = a + yy[i];

        if(newX < 0 || newX >= m || newY < 0 || newY >= n) continue;
        startDFS(newY, newX, num);
    }
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> m >> n >> k;
        while(k--) {
            int x, y; cin >> x >> y;
            map[y][x] = 1;
        }

        int num = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(check[i][j] == 0 && map[i][j] == 1) {
                    startDFS(n, m, num);
                    num++;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << check[i][j] << " ";
            }cout << "\n";
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                check[i][j] = 0;
            }
        }
    }
}