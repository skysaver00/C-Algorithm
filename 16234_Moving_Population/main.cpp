#include <bits/stdc++.h>
using namespace std;

int terr[51][51];
int n, l, r;
queue<pair<int, int>> bfs;

int x[4] = {1, 0, -1 ,0};
int y[4] = {0, 1, 0, -1};

void startBFS(int a, int b) {
    if(terr[a][b] == 0) {
        bfs.push({a, b});
    } else return;

    while(!bfs.empty()) {
        
    }
}

int main() {
    scanf("%d %d %d", &n, &l, &r);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &terr[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            startBFS(i, j);
        }
    }

    return 0;
}