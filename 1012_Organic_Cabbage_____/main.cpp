#include <iostream>
using namespace std;

bool map[51][51];
bool check[51][51];

bool startDFS(int n, int m, int num) {

}

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n, k; cin >> m >> n >> k;
        while(k--) {
            int x, y; cin >> x >> y;
            map[y][x] = 1;
        }

        int num = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!check[i][j]) {
                    startDFS(n, m, num);
                }
            }
        }
    }
}