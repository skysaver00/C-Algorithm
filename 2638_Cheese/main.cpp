#include <iostream>
#include <queue>
using namespace std;

int axis[101][101];
int zero[101][101];
queue<pair<int, int>> que;

int _x[4] = {1, 0, -1, 0};
int _y[4] = {0, 1, 0, -1};

bool check(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < 4; k++) {
                if((i + _x[k]) < 0 || (i + _x[k]) > n || (j + _y[k] < 0) || (j + _y[k] > m)) {
                    
                }
            }
        }
    }
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> axis[i][j];
        }
    }

    while(1) {
        bool flag = check(n, m);
        if(!flag) break;
    }

    return 0;
}